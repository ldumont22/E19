# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    conf_mysql.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/24 19:49:06 by ldumont           #+#    #+#              #
#    Updated: 2021/06/24 19:53:31 by ldumont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/bash

service nginx start;

service mysql start;

service php7.3-fpm start

echo "CREATE DATABASE wordpress;" | mysql -u root --skip-password;
echo "GRANT ALL PRIVILEGES ON wordpress.* TO 'root'@'localhost' WITH GRANT OPTION;" | mysql -u root --skip-password;
echo "FLUSH PRIVILEGES;" | mysql -u root --skip-password;
echo "update mysql.user set plugin='' where user='root';" | mysql -u root --skip-password;

service nginx start;

service php7.3-fpm restart;

if [ $INDEX = "on" ]
then
    bash set_index.sh y
elif [ $INDEX = "off" ]
then
    bash set_index.sh n
fi

sleep infinity