# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/24 19:58:16 by ldumont           #+#    #+#              #
#    Updated: 2021/06/24 20:02:29 by ldumont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

build:
			docker build -t ldumont .

run:
			docker run -it --rm -p 80:80 -p 443:443 ldumont

kill:

			-docker kill 'docker ps -qa''

clean: kill
			-docker rmi 'docker image -q''

# cclean: Remove tout les containeurs
# "-q" pour donner à chacun un ID unique
# Si aucun containeurs, cclean renvoie error
cclean: kill
			-docker rm 'docker ps -q-''