docker stop $(docker ps -aq)
docker rm $(docker ps -aq)
docker build -t ldumont .
docker run -tid --name web -p 80:80 -p 443:443 ldumont
docker exec -ti web sh