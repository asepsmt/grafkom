#include <GLUT/glut.h>
#include <stdio.h>

int w=400, h=400, z=0;
int x1=0, y1=0, sudut=0, z1=0;

void kaca()
{
    //atas
    glColor3f(0, 0, 0);
    glPushMatrix();
    glTranslatef(0, 43, z-6); 
    glScalef(3,0.2,0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    //kanan
    glColor3f(0, 0, 0);
    glPushMatrix();
    glTranslatef(5.85, 35.4, z-6); 
    glScalef(0.2,3.5,0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    //kiri
    glColor3f(0, 0, 0);
    glPushMatrix();
    glTranslatef(-6.05, 35.4, z-6); 
    glScalef(0.2,3.5,0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    //bawah
    glColor3f(0, 0, 0);
    glPushMatrix();
    glTranslatef(0, 28.5, z-6); 
    glScalef(3,0.2,0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    //kaca
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(-0.1, 35.8, z-6); 
    glScalef(2.6,3.32,0); 
    glutSolidCube(4.2f);
    glPopMatrix();
}

void jam()
{
    //bulatan jam
    glColor3f(1.0, 0.2, 0.5);
    glPushMatrix();
    glTranslatef(0.0, 24, z); //untuk mengatur koordinat 3d
    glScalef(1,1,1.0); //untuk mengatur ukuran benda
    glutSolidSphere(2, 20, 10);
    glPopMatrix();

    //penopang jam kanan
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(2, 22.5, z); //untuk mengatur koordinat 3d
    glScalef(0.1,0.7,0.1); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //penopang jam kiri
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(-2, 22.5, z); //untuk mengatur koordinat 3d
    glScalef(0.1,0.7,0.1); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //penopang jam bawah
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(0, 21.5, z); //untuk mengatur koordinat 3d
    glScalef(1.2, 0.1, 0.1); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //jarum jam
    glColor3f(1, 1, 0.2);
    glPushMatrix();
    glTranslatef(0.58, 24, z);   //untuk mengatur koordinat 3d
    glScalef(0.29,0.05,0);       //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

     //jarum menit
    glColor3f(1, 1, 0.2);
    glPushMatrix();
    glTranslatef(0.05, 24.8, z);   //untuk mengatur koordinat 3d
    glScalef(0.05,0.40,0);       //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();
}

void tembok()
{
    glColor3f(0.6, 0.3, 0);
    glPushMatrix();
    glTranslatef(0.0, 16, z -7);
    glScalef(10,13,1.0);
    glutSolidCube(4.2f);
    glPopMatrix();
}

void batubata()
{
    //batu bata
    //baris 1
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 42.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris2
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 40, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 3
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 37.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris4
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 35, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 5
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 32.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris6
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 30, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 7
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 27.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris8
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 25,z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 25, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 9
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 22.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris10
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 20, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 11
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 17.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 12
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 15, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 13
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 12.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 14
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 10, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 15
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 16
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 5, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 17
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, 2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 18
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, 0, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 19
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, -2.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 20
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, -5, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris 21
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-17.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-10.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(-3.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(3.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(10.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6,0, 0);
    glPushMatrix();
    glTranslatef(17.5, -7.5, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    //baris22
    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-19.5, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-14.0, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(-7.0, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(0, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(7.0, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(14.0, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(1.5,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();

    glColor3f(0.6, 0.0, 0);
    glPushMatrix();
    glTranslatef(19.5, -10, z -7); //untuk mengatur koordinat 3d
    glScalef(0.9,0.5,0); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();
}

void tiang()
{
    //TIANG
    //Tiang Kiri Depan
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(-7.5, 5.0, z+ 2.5);
    glScalef(0.15,7.0,0.25);
    glutSolidCube(4.5f);
    glPopMatrix();

    //Tiang Kiri Belakang
    glPushMatrix();
    glTranslatef(-7.5, 5.0, z-2.5);
    glScalef(0.15,7.0,0.25);
    glutSolidCube(4.5f);
    glPopMatrix();

    //Tiang Kanan Depan
    glPushMatrix();
    glTranslatef(7.5, 5.0, z+2.5);
    glScalef(0.15,7.0,0.25);
    glutSolidCube(4.5f);
    glPopMatrix();

    //Tiang Kanan Belakang
    glPushMatrix();
    glTranslatef(7.5, 5.0, z-2.5);
    glScalef(0.15,7.0,0.25);
    glutSolidCube(4.5f);
    glPopMatrix();

    glColor3f(0.0, 0.0, 0);
    //rak 1
    glPushMatrix();
    glTranslatef(0.0, 0.0, z);
    glScalef(3.0,0.09,1.5);
    glutSolidCube(6.0f);
    glPopMatrix();

    //rak2
    glPushMatrix();
    glTranslatef(0.0, -7.0, z);
    glScalef(3.0,0.09,1.5);
    glutSolidCube(6.0f);
    glPopMatrix();

    //rak3
    glPushMatrix();
    glTranslatef(0.0, 7.0, z);
    glScalef(3.0,0.09,1.5);
    glutSolidCube(6.0f);
    glPopMatrix();

    //rak4
    glPushMatrix();
    glTranslatef(0.0, 14.0, z);
    glScalef(3.0,0.09,1.5);
    glutSolidCube(6.0f);
    glPopMatrix();

    //rak5
    glPushMatrix();
    glTranslatef(0.0, 21.0, z);
    glScalef(3.0,0.09,1.5);
    glutSolidCube(6.0f);
    glPopMatrix();
}

void buku()
{
    //buku rak 3
    glColor3f(1.0, 0.0, 0);
    glPushMatrix();
    glTranslatef(-5.0, 10.3, z -1.5); //untuk mengatur koordinat 3d
    glScalef(0.3,1.3,1.2); //untuk mengatur ukuran benda
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 1.0, 0.7);
    glPushMatrix();
    glTranslatef(-3.0, 10.3, z -1.5); 
    glScalef(0.3,1.3,1.2); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(1.0, 0.0, 0.5);
    glPushMatrix();
    glTranslatef(-1.0, 10.3, z -1.5); 
    glScalef(0.3,1.3,1.2); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(1.0, 1.0, 0.5);
    glPushMatrix();
    glTranslatef(1.0, 10.3, z -1.5); 
    glScalef(0.3,1.3,1.2); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.0, 0.5);
    glPushMatrix();
    glTranslatef(3.0, 10.3, z -1.5);
    glScalef(0.3,1.3,1.2); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.1, 0.1, 0.0);
    glPushMatrix();
    glTranslatef(5.0, 10.3, z -1.5); 
    glScalef(0.3,1.3,1.2); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
	
    //buku rak 4
    glColor3f(0.2, 0.0, 0.2);
    glPushMatrix();
    glTranslatef(-6.0, 17.0, z -1.5);
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.3, 0.8, 0.1);
    glPushMatrix();
    glTranslatef(-4.0, 17.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.3, 0.1, 0.5);
    glPushMatrix();
    glTranslatef(-2.0, 17.0, z -1.5);
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.6, 0.1, 0.5);
    glPushMatrix();
    glTranslatef(0.0, 17.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.1, 1.0);
    glPushMatrix();
    glTranslatef(2.0, 17.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.3, 1.0);
    glPushMatrix();
    glTranslatef(4.0, 17.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.1, 0.2, 0.1);
    glPushMatrix();
    glTranslatef(6.0, 17.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
	
    //buku rak 2
    glColor3f(0.0, 0.0, 0.2);
    glPushMatrix();
    glTranslatef(-6.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.0, 0.4);
    glPushMatrix();
    glTranslatef(-4.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.3, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-2.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.1, 0.2);
    glPushMatrix();
    glTranslatef(0.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0);
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.0, 0.3);
    glPushMatrix();
    glTranslatef(2.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.0, 0.2);
    glPushMatrix();
    glTranslatef(4.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.0, 0.1);
    glPushMatrix();
    glTranslatef(6.0, 2.5, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
	
    //buku rak 1
    glColor3f(0.1, 0.0, 0.2);
    glPushMatrix();
    glTranslatef(-6.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.1, 0.4);
    glPushMatrix();
    glTranslatef(-4.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.2, 0.0);
    glPushMatrix();
    glTranslatef(-2.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.1, 0.2);
    glPushMatrix();
    glTranslatef(0.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.2, 0.3, 0.1);
    glPushMatrix();
    glTranslatef(2.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.0, 0.2);
    glPushMatrix();
    glTranslatef(4.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
	
    glColor3f(0.0, 0.0, 0.3);
    glPushMatrix();
    glTranslatef(6.0, -5.0, z -1.5); 
    glScalef(0.4,1.1,1.0); 
    glutSolidCube(4.2f);
    glPopMatrix();
}

void rakbuku()
{
    glRotatef(sudut,x1,y1,z1);
    tembok();
    batubata();
    kaca();
    jam();
    buku();
    tiang();
}

void timer(int value){
    glutPostRedisplay();
    glutTimerFunc(25,timer,0);
}

void display(void)
{
	
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1,1,1,1);
	glLoadIdentity();
	
	glTranslatef(0,0,-100);
	
	glFlush();
	glutSwapBuffers();
	
}

void tampil()
{
	display();
}

void myKeyboard(unsigned char key, int x, int y){
	if (key =='a') z+=1;
	else if (key == 'd') z-=1;
	else if (key == 'x') {
		x1=1;
		y1=0;
		z1=0;
		sudut+=5;
	}
	else if (key == 'y') {
		y1=1;
		x1=0;
		z1=0;
		sudut+=-5;
	}
	else if (key == 't') {
		y1=1;
		x1=0;
		z1=0;
		sudut-=-5;
	}
	else if (key == 'z') {
		y1=0;
		x1=0;
		z1=1;
		sudut+=-5;
	}
	else if (key == 'c') {
		y1=0;
		x1=0;
		z1=1;
		sudut-=-5;
	}
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(1000,700);
	glutCreateWindow("RAK");
	glClearColor(0.5,0.5,0.0,0.0);
	glutDisplayFunc(display);
	gluOrtho2D(-320., 320., -240.0, 240.0);
	glutIdleFunc(tampil);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(25, timer, 0);
	glutMainLoop();
	return(0);
}

