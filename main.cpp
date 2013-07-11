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
void tembok()
{
    glColor3f(0.6, 0.3, 0);
    glPushMatrix();
    glTranslatef(0.0, 16, z -7);
    glScalef(10,13,1.0);
    glutSolidCube(4.2f);
    glPopMatrix();
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
	glutMainLoop();
	return(0);
}

