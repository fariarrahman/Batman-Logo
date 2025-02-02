#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void lines()
{
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);

   //vertical lines
    for(int x = 0; x<=1050; x+=30)
    {
        glVertex2f(x,0);
        glVertex2f(x,750);
    }

      //horizontal line
    for(int y = 0; y<=750; y+=30)
    {
        glVertex2f(0,y);
        glVertex2f(1050,y);
    }

    glEnd();

}

void blackbox()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    //Big box
    glVertex2f(270,60);
    glVertex2f(780,60);
    glVertex2f(780,690);
    glVertex2f(270,690);

    for(int x = 780, y = 90; x<990; x+=30, y+=30) //right side
    {
        glVertex2f(x,y);
        glVertex2f(x+30,y);
        glVertex2f(x+30,750-y);
        glVertex2f(x,750-y);
    }

    for(int x = 270, y = 90; x>60; x-=30, y+=30) //left side
    {
        glVertex2f(x,750-y);
        glVertex2f(x-30,750-y);
        glVertex2f(x-30,y);
        glVertex2f(x,y);
    }

    glEnd();
}

void yellow()
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);

    //Down
    glVertex2f(270,90); //Big bar
    glVertex2f(780,90);
    glVertex2f(780,120);
    glVertex2f(270,120);

    glVertex2f(270,120); //left down 2box
    glVertex2f(330,120);
    glVertex2f(330,150);
    glVertex2f(270,150);

    glVertex2f(360,120); // left 5box
    glVertex2f(510,120);
    glVertex2f(510,150);
    glVertex2f(360,150);

    glVertex2f(360,150);
    glVertex2f(480,150);
    glVertex2f(480,180);
    glVertex2f(360,180);

    glVertex2f(390,180);
    glVertex2f(480,180);
    glVertex2f(480,210);
    glVertex2f(390,210);

    glVertex2f(420,210); //left up
    glVertex2f(450,210);
    glVertex2f(450,240);
    glVertex2f(420,240);

    glVertex2f(540,120); //right down 5box
    glVertex2f(690,120);
    glVertex2f(690,150);
    glVertex2f(540,150);

    glVertex2f(570,180);
    glVertex2f(690,180);
    glVertex2f(690,150);
    glVertex2f(570,150);

    glVertex2f(570,180);
    glVertex2f(660,180);
    glVertex2f(660,210);
    glVertex2f(570,210);

    glVertex2f(600,240); //right up single box
    glVertex2f(630,240);
    glVertex2f(630,210);
    glVertex2f(600,210);

    glVertex2f(720,120);//right down 2box
    glVertex2f(780,120);
    glVertex2f(780,150);
    glVertex2f(720,150);


    //Top
    glVertex2f(270,630); //Full bar
    glVertex2f(780,630);
    glVertex2f(780,660);
    glVertex2f(270,660);

    //Left Side
    glVertex2f(270,600); //Left side top short bar
    glVertex2f(450,600);
    glVertex2f(450,630);
    glVertex2f(270,630);

    glVertex2f(360,600); //left big box
    glVertex2f(450,600);
    glVertex2f(450,480);
    glVertex2f(360,480);

    glVertex2f(360,450);//Left Top down last 2box
    glVertex2f(420,450);
    glVertex2f(420,480);
    glVertex2f(360,480);

    glVertex2f(360,480); //left side 3box
    glVertex2f(330,480);
    glVertex2f(330,570);
    glVertex2f(360,570);

    //Middle
    glVertex2f(480,600);
    glVertex2f(570,600);
    glVertex2f(570,630);
    glVertex2f(480,630);

    //Right Side
    glVertex2f(600,600);
    glVertex2f(780,600);
    glVertex2f(780,630);
    glVertex2f(600,630);

    glVertex2f(600,600); //right big box
    glVertex2f(690,600);
    glVertex2f(690,480);
    glVertex2f(600,480);

    glVertex2f(630,450);//right down last 2box
    glVertex2f(690,450);
    glVertex2f(690,480);
    glVertex2f(630,480);

    glVertex2f(690,480); //right side 3box
    glVertex2f(720,480);
    glVertex2f(720,570);
    glVertex2f(690,570);

    for(int x = 780, y = 630; x<=930; x+=30, y-=30) //right side top
    {
        glVertex2f(x,y);
        glVertex2f(x+30,y);
        glVertex2f(x+30,y-60);
        glVertex2f(x,y-60);
    }

    glVertex2f(930,300);
    glVertex2f(960,300);
    glVertex2f(960,450);
    glVertex2f(930,450);

    for(int x = 780, y = 120; x<=900; x+=30, y+=30) //right side down
    {
        glVertex2f(x,y);
        glVertex2f(x+30,y);
        glVertex2f(x+30,y+60);
        glVertex2f(x,y+60);
    }

for(int x = 270, y = 630; x>90; x-=30, y-=30) //Left side top
    {
        glVertex2f(x,y);
        glVertex2f(x-30,y);
        glVertex2f(x-30,y-60);
        glVertex2f(x,y-60);
    }

    glVertex2f(90,300);
    glVertex2f(120,300);
    glVertex2f(120,450);
    glVertex2f(90,450);

    for(int x = 270, y = 120; x>90; x-=30, y+=30) //right side down
    {
        glVertex2f(x,y);
        glVertex2f(x-30,y);
        glVertex2f(x-30,y+60);
        glVertex2f(x,y+60);
    }

    glEnd();
}
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(0,1050,0,750);

    blackbox();
    yellow();
    lines();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1050, 750);
    glutInitWindowPosition(100, 25);
    glutCreateWindow("BATMAN LOGO");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

