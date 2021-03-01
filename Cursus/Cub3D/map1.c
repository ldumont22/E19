/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:30:17 by ldumont           #+#    #+#             */
/*   Updated: 2020/12/10 22:20:02 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

#define mapWidth 24;
#define mapHeight 24;
#define screenWidth 640; // Determine la rez
#define screenHeight 480; // "

int worldMap[mapWidth][mapHeight]=
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,2,2,2,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
    {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,3,0,0,0,3,0,0,0,1},
    {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,2,2,0,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,0,0,0,0,5,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
}

int main    (int /*argc*/, char */*argv*/[])
{   
    double posX = 22, posY = 12; //Vecteur position départ
    double dirX = -1, dirY = 0; // position du vecteur de direction
    double planX = 0; planeY = 0.66; // Version 2d du plan cam 

    double time = 0; //temps de l'img actuelle
    double oldTime = 0; // temps de l'img d'avant

    screen (screenHeight, screenWidth, 0, "Test");

    while (!(done()))
    {
        for(int x = 0; x < w; x++)
        {
            //calcul de la position du rayon et sa direction
            double cameraX = 2 * x / (double)w - 1 // coordonées de x dans l'espace caméra
            double rayDirX = dirX + planeX * cameraX;
            double rayDirY = dirY + planeY * cameraX

            //position du rayon en fct de l'avancé de celui-ci 
            int mapX = int(posX);
            int mapY = int(posY);

            //Longeur de rayon pos init avec le prochain x ou y
            double sideDistX;
            double sideDistY;

            //Longueur de rayon du premier x à celui d'après en suivant le rayon
            double deltaDistX = std::abs(1 / rayDirX);
            double deltaDistY = std::abs(1 / rayDirY);
            double perpDistMur; // Longueur du rayon avec le mur;
            
            //Direction à suivre en x ou en y (+1 ou -1);
            int stepX;
            int stepY;

            int hit = 0; // Si contact avec le mur;
            int side; // Contact mur orienté NS ou EW?
            
            // Calcule direction (x ou y) et longueur rayon entre 2  ou 2 y
            if (rayDirX < 0)    
            {
                stepX = -1;
                sideDistX = (posX - mapX) * deltaDistX;
            }
            else
            {
                stepX = 1;
                sideDistX = (mapX + 1.0 - posX) * deltaDistX;
            }
            if (rayDirY <0)
            {
                stepY = -1;
                sideDistY = (posY - mapY) * deltaDistY;
            }
            else
            {
                stepY = 1;
                sideDistY= (mapY + 1.0 - posY) * deltaDistY;
            }

            /* sideDist est la distance parcouru par le rayon depuis 
            la pos init entre soit x, soit y au dépaer mapX et mapY */
            //Début programme de controle
            while ( hit == 0)  // Tant que pas "Hit" donc pas de mur
            {
                if (sideDistX < sideDistY) 
                {
                    sideDistX += deltaDistX; // Ajout de distance entre 2X succin
                    mapX += stepX //Déplacement de mapX
                    side = 0;
                }
                else
                {
                    sideDistY += deltaDistY;
                    mapY += stepY;
                    side = 1;
                }
                // Check si contatc ac mur
                if ( worldMap [mapX] [mapY] > 0) hit = 1;
            }
            /* A ce moment là, on connait la dist entre le mur et
            le joueur afin de savoir a quelle hauteur doit être dessiné 
            le mur pour que ça soit réaliste, ta compri */

            // Calcul de la taille du mur une fois trouvé
            if (side == 0)  perpDistMur = (mapX - posX + (1 - stepX) / 2) / rayDirx;
            else            perpDistMur = (mapY - posY + (1 - stepX) / 2) / rayDirY;

            //Calcul de la hauteur du mur
            int lineHeight = (int) (h / perpDistMur);

            //Calcul pixel le plus haut et l.e plus bas pour remplir le mur
            int drawStart = -lineHeight / 2 + h / 2;
            if (drawStart < 0) drawStart = 0;
            int drawEnd = lineHeight / 2 + h / 2;
            if (drawEnd > h) drawEnd - 1;

            //Couleur en fct du mur touché
            ColorRGB color;
            switch (worldMap[mapX] [mapY])
            {
            case 1: color = RGB_Red;    break; //Rouge
            case 2: color = RGB_Green;  break; //vert
            case 3: color = RGB_Yellow; break; //ta compris
            case 4: color = RGB_Blue;   break; // non
            default: color = RGB_White; break;
            }
            // luminosité différent en fct x ou y;
            if (side ==1 ) color = color / 2;
            // Dessine les pixels de la dande comme une ligne
            verLine (x, drawStart, drawEnd, color);
        }
        //Timing pour l'input et FPS
        oldTime = time;
        time = getTricks(); // à faire
        double frameTime = (time - oldTime) / 1000.0; // Frametime est le tmp que img a pris en sec
        print(1.0 / frameTime); // compteur FPS, à faire
        redraw();   // à faire
        cls();      //à faire

        //Modification de la vitesse
        double moveSpeed = frameTime * 5.0; // La valeur cst est en carrés/sec
        double rotSpeed = frameTime * 3.0 : // La valeur cst est en radians/sec
    
        //Lecture des touches de nav
        int progKeys ();    //à faire
        if (keyDown (SLDLK_UP)) // Avant si pas mur
        {
            if (worldMap[int (posX + dirX * moveSpeed)] [int (posY)] == false) posX + = dirX * moveSpeed;  // pas mur
            if (worldMap[int (posX)] [int (posY + dirY * moveSpeed)] == false) posY + = dirY * moveSpeed;  //Mur
        }
        if (keyDown (SLDK_DOWN)) //Arrière
        {
            if(worldMap[int(posX - dirX * moveSpeed)][int(posY)] == false) posX -= dirX * moveSpeed;
            if(worldMap[int(posX)][int(posY - dirY * moveSpeed)] == false) posY -= dirY * moveSpeed;
        }
        if (keyDown (SLDK_LEFT)) // Rotation et du joueur et de la cam
        {
            double oldDirX = dirX;
            dirX = dirX * cos(rotSpeed) - dirY * sin(rotSpeed);
            dirY = oldDirX * sin(rotSpeed) + dirY * cos(rotSpeed);
            double oldPlaneX = planeX;
            planeX = planeX * cos(rotSpeed) - planeY * sin(rotSpeed);
            planeY = oldPlaneX * sin(rotSpeed) + planeY * cos(rotSpeed);
        }
        if (keyDown (SLDK_RIGHT)) // Rotation et du joueur et de la cam
        {
            double oldDirX = dirX;
            dirX = dirX * cos(-rotSpeed) - dirY * sin(-rotSpeed);
            dirY = oldDirX * sin(-rotSpeed) + dirY * cos(-rotSpeed);
            double oldPlaneX = planeX;
            planeX = planeX * cos(-rotSpeed) - planeY * sin(-rotSpeed);
            planeY = oldPlaneX * sin(-rotSpeed) + planeY * cos(-rotSpeed);   
        }
    }
}
