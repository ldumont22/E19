service mysql restart
mysql -u root -e "CREATE DATABASE wordpress;"
mysql -u root -e "CREATE USER 'ldumont'@'localhost' IDENTIFIED BY 'pass';"
mysql -u root -e "GRANT ALL ON wordpress.* TO 'ldumont'@'localhost';"
mysql -u root -e "FLUSH PRIVILEGES;"
service nginx start && service php7.3-fpm start && service my-sql restart