# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 14:37:04 by ldumont           #+#    #+#              #
#    Updated: 2020/11/30 14:56:35 by ldumont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster

MAINTAINER ldumont <ldumont@student.s19.be>

#### Utils ####
RUN apt-get update -y \
    && apt-get clean -y \
    && apt-get install wget -y \
    && apt-get install curl -y \
    && apt-get install -y vim

#### Installation nginx ####
RUN apt-get install nginx -y

#### Installation mariadb ####
RUN apt-get -y install mariadb-server mariadb-client 

#### Installation php ####
RUN apt-get -y install php \
    && apt-get -y install php-mysql \
    && apt install -y php7.3 php7.3-fpm php7.3-mysql \
    && apt install -y php-mbstring

#### Install phpMyAdmin ####
RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.1/phpMyAdmin-5.0.1-all-languages.tar.gz
RUN	tar -zxzf phpMyAdmin-5.0.1-all-languages.tar.gz \
	&& mv phpMyAdmin-5.0.1-all-languages /var/www/html/phpMyAdmin \
	&& rm phpMyAdmin-5.0.1-all-languages.tar.gz \
	&& mkdir /var/www/html/phpMyAdmin/tmp

#### Install SSL ####
RUN mkdir ./mkcert
ADD /srcs/mkcert ./mkcert/
RUN chmod +x ./mkcert/mkcert && ./mkcert/mkcert -install && ./mkcert/mkcert localhost.com

#### Install WordPress ####
RUN cd /tmp \
	&& curl -LO https://wordpress.org/latest.tar.gz \
	&& tar xzvf latest.tar.gz \
	&& mkdir /var/www/html/wordpress \
	&& cp -a /tmp/wordpress/. /var/www/html/wordpress

#### Permissions ####
RUN chmod -R 755 /var/www/* \
	&& chown -R www-data:www-data /var/www/ \
	&& chmod 777 /var/www/html/phpMyAdmin/tmp

#### Config ####
RUN rm /var/www/html/*.html
ADD /srcs/nginx.conf /etc/nginx/sites-available/
ADD /srcs/nginx.conf /etc/nginx/sites-enabled/
ADD /srcs/config.inc.php /var/www/html/phpMyAdmin/
ADD /srcs/conf_mysql.sh ./

#### Ports d'ecoutes ####
EXPOSE 80 443

#### Commande demarrage ####
CMD /bin/bash ./conf_mysql.sh && sleep infinity
