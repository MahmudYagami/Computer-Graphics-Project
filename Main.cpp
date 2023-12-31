#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<cstdio>

using namespace std;

bool dayNight = true;
void setColor(string col){
    
        if(col == "sky") glColor3ub (4, 135, 226);
        else if(col == "buildingglass") glColor3ub (233, 209, 102);
        else if(col == "bulidingcolor") glColor3ub (3, 21, 28);
        else if(col == "buildingShadow") glColor3ub (4, 62, 90);
        else if(col == "cloud") glColor3ub (243, 251, 254);
        else if(col == "twintower") glColor3ub (100, 136, 160);
        else if(col == "brick") glColor3ub (175, 44, 35);
        else if(col == "midBuilding") glColor3ub (180, 188, 193);
        else if(col == "frontBuilding") glColor3ub (100, 116, 127);
        else if(col == "iceBlue") glColor3ub (149, 168, 172);
        else if(col == "pink") glColor3ub (211, 163, 181);
        else if(col == "reflectionDark") glColor3ub (103, 121, 134);
        else if(col == "reflectionLight") glColor3ub (151, 168, 175);
        else if(col == "trainBody") glColor3ub (102, 121, 134);
        else if(col == "trainGlass") glColor3ub (146, 168, 175);
        else if(col == "trainStripeLight") glColor3ub (148, 167, 176);
        else if(col == "trainStripeDark") glColor3ub (106, 120, 133);
        else if(col == "background") glColor3ub (215, 216, 215);
        else if(col == "birdFace") glColor3ub (178, 199, 212);
        else if(col == "light") glColor3ub (255, 254, 211);
        else if(col == "sun") glColor3ub (215, 146, 145);

        //ship
        else if(col == "window")glColor3ub(255,194,113);
        else if(col == "ship_side")glColor3ub(0,38,84);
        else if(col == "ship_side1")glColor3ub(243, 156, 18);
        else if(col == "chimney")glColor3ub(125,2,30);
        else if(col == "ship_window")glColor3ub(0, 150, 136 );
        else if(col == "Ship_Border")glColor3ub(169, 50, 38);
        else if(col == "Off white")glColor3ub(153, 163, 164);
        else if(col == "ship_body")glColor3ub(97, 106, 107);
        else if(col == "ship_body2")glColor3ub(178, 186, 187);
        else if(col == "Top_floor")glColor3ub(224, 224, 224);
        else if(col == "Railing")glColor3ub(214, 219, 223);
         else if(col =="Firefly")glColor3ub(9,22,28);

    else if(col == "Cship_floor")glColor3ub( 219,99,75);
    else if(col == "Cship_shadow")glColor3ub(201,86,66);
    else if(col == "Crail")glColor3ub(180,71,61);
    else if(col == "Japonica")glColor3ub(215,116,89); // stairs

}
//----------------------------------------------Dock Part----------------------------------------
float ship_pos = -41.0;
void circle(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(151, 149, 128 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }

   void circle1(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(151, 149, 128  );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }
void Crane()
{
    glPushMatrix();
	glTranslatef(-20,0,0);
    glScalef(3,3,1);
	glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90 );
    glVertex2f(-2.00,-2.25);
    glVertex2f(-2.00,-2.00);
    glVertex2f(-1.00,-2.00);
    glVertex2f(-1.00,-2.25);
    glVertex2f(-2.00,-2.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);//blue
    glVertex2f(-1.50,-2.00);
    glVertex2f(-1.50,-1.50);
    glVertex2f(-0.25,0.50);
    glVertex2f(-0.25,-0.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-1.00,-2.00);
    glVertex2f(-1.50,-2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90 );
    glVertex2f(1.50,-2.00);
    glVertex2f(2.50,-2.00);
    glVertex2f(2.50,-2.25);
    glVertex2f(1.50,-2.25);
    glVertex2f(1.50,-2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);//blue
    glVertex2f(2.00,-2.00);
    glVertex2f(2.00,-1.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,-0.50);
    glVertex2f(1.50,-1.50);
    glVertex2f(1.50,-2.00);
    glVertex2f(2.00,-2.00);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(43, 111, 194);
    glVertex2f(-0.25,-0.50);
    glVertex2f(0.75,-0.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);
    glVertex2f(-0.25,0.39);
    glVertex2f(-0.25,0.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,0.39);
    glVertex2f(-0.25,0.39);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 127, 203 );
    glVertex2f(-0.82,-1.25);
    glVertex2f(1.32,-1.25);
    glVertex2f(1.50,-1.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-0.82,-1.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(233, 222, 49 ); //yellow-1
    glVertex2f(-1.75,0.50);
    glVertex2f(-1.75,0.75);
    glVertex2f(-0.75,0.75);
    glVertex2f(0.75,0.50);
    glVertex2f(-1.75,0.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(247, 233, 14 ); //yellow-2
    glVertex2f(-0.75,0.50);
    glVertex2f(-0.75,0.75);
    glVertex2f(1.25,0.75);
    glVertex2f(1.25,0.50);
    glVertex2f(-0.75,0.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 226, 34  );//Y
    glVertex2f(0.0,0.75);
    glVertex2f(0.25,0.75);
    glVertex2f(0.25,1.50);
    glVertex2f(0.0,1.66);
    glVertex2f(0.0,0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(227, 66, 53 );// Room
    glVertex2f(-1.75,0.75);
    glVertex2f(-1.75,1.75);
    glVertex2f(0.0,1.75);
    glVertex2f(0.0,0.75);
    glVertex2f(-1.75,0.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(86, 101, 115 );// window
    glVertex2f(-1.50,1.00);
    glVertex2f(-1.50,1.50);
    glVertex2f(-1.00,1.50);
    glVertex2f(-1.00,1.00);
    glVertex2f(-1.50,1.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 226, 34);//Y-1
    glVertex2f(-1.00,1.75);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-0.16,1.75);
    glVertex2f(1.00,1.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-1
    glVertex2f(-1.75,2.00);
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.75,2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-2
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.75,3.00);
    glVertex2f(-1.25,3.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.75,2.50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(44, 62, 80 );
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-1 //236, 223, 27
    glVertex2f(-1.25,2.25);
    glVertex2f(-1.25,2.50);
    glVertex2f(1.25,4.00);
    glVertex2f(1.25,3.75);
    glVertex2f(-1.25,2.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-2-Y
    glVertex2f(1.25,4.00);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(1.25,3.75);
    glVertex2f(1.25,4.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-3-Y
    glVertex2f(0.00,3.25);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(0.00,3.00);
    glVertex2f(0.00,3.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-4-Y
    glVertex2f(0.25,0.75);
    glVertex2f(1.75,2.50);
    glVertex2f(1.75,2.25);
    glVertex2f(0.50,0.75);
    glVertex2f(0.25,0.75);
    glEnd();

    // Rope
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.02,1.75);
    glVertex2f(3.02,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.49,1.75);
    glVertex2f(3.49,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.00,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.50,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();

    //
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.25,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.75,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.00,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.50,-0.75);
    glEnd();

    //Container
    glBegin(GL_POLYGON);
    glColor3ub(249, 183, 7 );
    glVertex2f(2.25,-0.75);
    glVertex2f(4.50,-0.75);
    glVertex2f(4.50,-1.50);
    glVertex2f(2.25,-1.50);
    glVertex2f(2.25,-0.75);
    glEnd();







    circle(0.232,3.25,1.75);
    circle1(0.232,3.25,0.50);
	glPopMatrix();
}
void house()
{
    // front part
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(13.9088, -4.92522);
    glVertex2f(13.9088, 1.49739);
    glVertex2f(21.9849, 1.49237);
    glVertex2f(21.9849, -4.93024);
    glEnd();

    // shadow part
    glColor3ub(9, 22, 28);
    // Draw the polygon with specified vertices
    glBegin(GL_POLYGON);
    glVertex2f(21.9849, -4.93024);
    glVertex2f(21.9849, 1.49237);
    glVertex2f(29.2491, 1.48786);
    glVertex2f(29.2491, -4.93476);
    glEnd();

    //first window
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();

    //second window
    glPushMatrix();
    glTranslatef(2.43499, 0, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    //third window
    glPushMatrix();
    glTranslatef(4.86998, 0, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // fourth window
    glPushMatrix();
    glTranslatef(0, -2.14087, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // fifth window
    glPushMatrix();
    glTranslatef(2.4356, -2.14239, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // sixth window
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(20.1047, -3.5528);
    glVertex2f(20.1047, -2.53334);
    glVertex2f(20.9594, -2.53387);
    glVertex2f(20.9594, -3.55333);
    glEnd();



}

void water()
{
    glColor3ub(104, 138, 137);  // RGB color
    glBegin(GL_POLYGON);
    glVertex2d(-41, -7.49072);
    glVertex2d(-41, -24.9745);
    glVertex2d(41, -25.0255);
    glVertex2d(41, -7.54169);
    glEnd();
}

void shadowBuildings()
{
    // rightmost back shadow building
    glColor3ub(191, 180, 160);
    glBegin(GL_POLYGON);
    glVertex2f(36.6415, -4.93935);
    glVertex2f(36.6415, 2.50272);
    glVertex2f(23.4377, 2.51093);
    glVertex2f(23.4377, -4.93115);
    glEnd();

    // shadow tower
    glColor3ub(191, 180, 160);    
    glBegin(GL_POLYGON);
    glVertex2f(28.8645, 12.1415);
    glVertex2f(28.8645, 2.55853);
    glVertex2f(31.172, 2.5571);
    glVertex2f(31.172, 12.14);
    glEnd();

    // middle shadow
    glColor3ub(191, 180, 160);    
    glBegin(GL_POLYGON);
    glVertex2f(-4.80719, -4.91359);
    glVertex2f(-4.80719, 6.24953);
    glVertex2f(3.48254, 6.24437);
    glVertex2f(3.48254, -4.96971);
    glEnd();
}


void shipofdock()
{
    glPushMatrix();
    glTranslatef(ship_pos, -10, 0);
    glScalef(0.8, 0.8, 0);
    
    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    setColor("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    setColor("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    setColor("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    setColor("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    setColor("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    setColor("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    setColor("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    setColor("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    setColor("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    setColor("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    setColor("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    setColor("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    setColor("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    setColor("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    setColor("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    setColor("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     setColor("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    setColor("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     setColor("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

        glBegin(GL_POLYGON); //Container-1
    glColor3ub(213, 39, 39 );
    glVertex2f(13.00,3.25);
    glVertex2f(13.00,7.75);
    glVertex2f(21.25,7.75);
    glVertex2f(21.25,3.25);
    glVertex2f(13.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25,3.25);
    glVertex2f(21.25,7.75);
    glVertex2f(25.00,7.75);
    glVertex2f(25.00,3.25);
    glVertex2f(21.25,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00,3.25);
    glVertex2f(25.00,7.75);
    glVertex2f(30.00,7.75);
    glVertex2f(30.00,3.25);
    glVertex2f(25.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00,3.25);
    glVertex2f(30.00,7.75);
    glVertex2f(33.25,7.75);
    glVertex2f(33.25,3.25);
    glVertex2f(30.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00,7.75);
    glVertex2f(14.00,11.50);
    glVertex2f(18.00,11.50);
    glVertex2f(18.00,7.75);
    glVertex2f(14.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00,7.75);
    glVertex2f(18.00,11.50);
    glVertex2f(25.50,11.50);
    glVertex2f(25.50,7.75);
    glVertex2f(18.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50,7.75);
    glVertex2f(25.50,11.50);
    glVertex2f(29.75,11.50);
    glVertex2f(29.75,7.75);
    glVertex2f(25.50,7.75);
    glEnd();
    glPopMatrix();
}

void ground1()
{
    // Set the drawing color to the specified RGB color
    glColor3ub(0xE9, 0x91, 0x5B); // RGB for e9915b
    glBegin(GL_POLYGON);

    // Specify the vertices of the polygon
    glVertex2f(-41.0, -6.31834);
    glVertex2f(41.0, -6.31834);
    glVertex2f(41.0, -4.99304);
    glVertex2f(-41.0, -4.99304);
    glEnd();

    // second layer
    // Set the drawing color to the specified RGB color for the second polygon
    glColor3ub(182, 101, 72); // RGB for B66548

    // Begin drawing the second polygon
    glBegin(GL_POLYGON);
    glVertex2f(41.0, -6.36931);
    glVertex2f(41.0, -7.54169);
    glVertex2f(-41.0, -7.54169);
    glVertex2f(-41.0, -6.36931);
    glEnd();
}

// background sky
void skyofdock()
{
    glColor3ub(244, 221, 187);
    glBegin(GL_POLYGON); // Begin drawing rectangle
    glVertex2f(-41, -4.89109);
    glVertex2f(-41, 30.0255);
    glVertex2f(41, 29.9745);
    glVertex2f(41, -4.94206);
    glEnd();
}

// tower design
void tower()
{
    // upper triangle
    glColor3ub(119, 63, 50); // RGB for 773F32

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-29.2064, 13.7068);
    glVertex2f(-34.0349, 17.4818);
    glVertex2f(-38.8635, 13.7128);
    glEnd();

    // left rectangle
    glColor3ub(229, 139, 79); // RGB for E58B4F
    glBegin(GL_POLYGON);
    glVertex2f(-35.6587, -4.89441);
    glVertex2f(-35.6587, 13.6598);
    glVertex2f(-38.8635, 13.6618);
    glVertex2f(-38.8635, -4.89242);
    glEnd();

    // middle rectangle
    glColor3ub(217, 130, 78); // RGB for D9824E
    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-32.4112, -4.89643);
    glVertex2f(-32.4112, 13.6578);
    glVertex2f(-35.6587, 13.6598);
    glVertex2f(-35.6587, -4.89441);
    glEnd();

    // right rectangle
    glColor3ub(161, 89, 65); // RGB for A15941

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-29.2064, -4.89842);
    glVertex2f(-29.2064, 13.6558);
    glVertex2f(-32.4112, 13.6578);
    glVertex2f(-32.4112, -4.89643);
    glEnd();
}

// largest carrier
void firstCarrier()
{
    // left part
    glColor3ub(119, 63, 50); // RGB for 773F32
    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-23.9932, 18.495);
    glVertex2f(-23.9932, -4.90166);
    glVertex2f(-25.7452, -4.90057);
    glVertex2f(-25.7452, 18.4961);
    glEnd();

    // left part shadow
    glColor3ub(9, 22, 28); // RGB for 09161C

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-22.7968, 18.4943);
    glVertex2f(-22.7968, -4.95338);
    glVertex2f(-23.9505, -4.90169);
    glVertex2f(-23.9505, 18.495);
    glEnd();

    // middle part
    glColor3ub(119, 63, 50); // Set color to RGB(119, 63, 50)
    glBegin(GL_POLYGON);     // Begin drawing points
    glVertex2f(-16.9427, 18.5416);
    glVertex2f(-16.9427, -4.95702);
    glVertex2f(-18.6946, -4.95593);
    glVertex2f(-18.6946, 18.5427);
    glEnd(); // End drawing points

    // middle part shadow
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-15.7462, 18.5408);
    glVertex2f(-15.7462, -4.95776);
    glVertex2f(-16.8999, -4.95704);
    glVertex2f(-16.8999, 18.5416);
    glEnd(); // End drawing points

    // right part
    glColor3ub(119, 63, 50); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);     // Begin drawing points
    glVertex2f(-9.97759, 18.5373);
    glVertex2f(-9.97759, -4.96135);
    glVertex2f(-11.7723, -4.96023);
    glVertex2f(-11.7723, 18.5384);
    glEnd(); // End drawing points

    // right part shadow
    glColor3ub(9, 22, 28); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);   // Begin drawing points
    glVertex2f(-8.78114, 18.5365);
    glVertex2f(-8.78114, -4.96209);
    glVertex2f(-9.93486, -4.96137);
    glVertex2f(-9.93486, 18.5372);
    glEnd(); // End drawing points

    // upper shadow part
    glColor3ub(9, 22, 28); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);   // Begin drawing points
    glVertex2f(-8.78114, 20.1677);
    glVertex2f(-8.78114, 18.5875);
    glVertex2f(-25.7879, 18.5981);
    glVertex2f(-25.7879, 20.1782);
    glEnd();

    // upper main part
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-25.8306, 20.1783);
    glVertex2f(-25.8306, 18.5981);
    glVertex2f(-33.0521, 18.6026);
    glVertex2f(-33.0521, 20.1827);
    glEnd();

    // left upper triangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-19.0365, 27.2593);
    glVertex2f(-23.9932, 20.2281);
    glVertex2f(-25.7879, 20.2292);
    glVertex2f(-20.6175, 27.2603);
    glEnd();

    // left triangle shadow part
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON);
    glVertex2f(-23.9505, 20.2281);
    glVertex2f(-22.754, 20.2273);
    glVertex2f(-19.8484, 24.5073);
    glVertex2f(-18.7374, 20.2248);
    glVertex2f(-17.6264, 20.2241);
    glVertex2f(-17.1136, 20.8865);
    glVertex2f(-19.0365, 27.2593);
    glEnd();

    // triangle
    glColor3ub(241, 221, 187); // Set color to RGB(241, 221, 187)
    glBegin(GL_POLYGON);       // Begin drawing points
    glVertex2f(-22.7113, 20.2273);
    glVertex2f(-19.8484, 24.4563);
    glVertex2f(-18.7801, 20.2248);
    glEnd();

    glPushMatrix();
    // translating the same upper right triangle to the left
    glTranslatef(8.1615, 0.0051, 0);

    // left upper triangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-19.0365, 27.2593);
    glVertex2f(-23.9932, 20.2281);
    glVertex2f(-25.7879, 20.2292);
    glVertex2f(-20.6175, 27.2603);
    glEnd();

    // left triangle shadow part
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON);
    glVertex2f(-23.9505, 20.2281);
    glVertex2f(-22.754, 20.2273);
    glVertex2f(-19.8484, 24.5073);
    glVertex2f(-18.7374, 20.2248);
    glVertex2f(-17.6264, 20.2241);
    glVertex2f(-17.1136, 20.8865);
    glVertex2f(-19.0365, 27.2593);
    glEnd();

    // triangle
    glColor3ub(241, 221, 187); // Set color to RGB(241, 221, 187)
    glBegin(GL_POLYGON);       // Begin drawing points
    glVertex2f(-22.7113, 20.2273);
    glVertex2f(-19.8484, 24.4563);
    glVertex2f(-18.7801, 20.2248);
    glEnd();

    glPopMatrix();
}

void secondCarrier()
{
    // left rectangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(-3.65347, -4.96528);
    glVertex2f(-2.20063, -4.96618);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(-3.65347, 24.2933);
    glEnd();

    // upper part
    glColor3ub(119, 63, 50); // RGB for 773F32
    glBegin(GL_POLYGON);
    glVertex2f(4.50808, 22.6571);
    glVertex2f(-2.20063, 22.6613);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(4.50808, 24.2882);
    glEnd();

    // right part
    glPushMatrix();
    glTranslatef(7.13594, 0, 0);
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(-3.65347, -4.96528);
    glVertex2f(-2.20063, -4.96618);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(-3.65347, 24.2933);
    glEnd();
    glPopMatrix();

    // right shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(12.8405, -4.92456);
    glVertex2f(10.7895, -4.92328);
    glVertex2f(10.8322, 24.2843);
    glVertex2f(12.8405, 24.283);
    glEnd();

    // upper shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(4.55081, 22.708);
    glVertex2f(10.8749, 22.7041);
    glVertex2f(10.8749, 24.2843);
    glVertex2f(4.55081, 24.2882);
    glEnd();

    // middle shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(5.53361, -4.97099);
    glVertex2f(5.53361, 22.6564);
    glVertex2f(4.55081, 22.6571);
    glVertex2f(4.55081, -4.97038);
    glEnd();

    // upper cross
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.41428, 22.7633);
    glVertex2f(3.52527, 9.50663);
    glVertex2f(3.52527, 10.2712);
    glVertex2f(-2.07243, 22.916);
    glEnd();

    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(3.568, 22.1479);
    glVertex2f(3.568, 21.2814);
    glVertex2f(-2.32882, 9.20443);
    glVertex2f(-2.32882, 10.1729);
    glEnd();
    // end of upper cross

    // middle bar of the crosses
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 9.56121);
    glVertex2f(-2.28609, 8.69467);
    glVertex2f(3.61073, 8.691);
    glVertex2f(3.61073, 9.55755);
    glEnd();

    // lower cross
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 8.4398);
    glVertex2f(3.35435, -4.96963);
    glVertex2f(3.65347, -4.96982);
    glVertex2f(3.568, -4.30712);
    glVertex2f(-2.11516, 9.05137);
    glEnd();

    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.24336, -4.40545);
    glVertex2f(-2.24336, -4.96615);
    glVertex2f(-2.0297, -4.96629);
    glVertex2f(3.568, 7.82449);
    glVertex2f(3.568, 8.84395);
    glEnd();
    // end of lower cross

    // shadow cross
    glPushMatrix();
    glTranslatef(7.69151, 0, 0);
    // upper cross
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.41428, 22.7633);
    glVertex2f(3.52527, 9.50663);
    glVertex2f(3.52527, 10.2712);
    glVertex2f(-2.07243, 22.916);
    glEnd();

    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(3.568, 22.1479);
    glVertex2f(3.568, 21.2814);
    glVertex2f(-2.32882, 9.20443);
    glVertex2f(-2.32882, 10.1729);
    glEnd();
    // end of upper cross

    // middle bar of the crosses
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 9.56121);
    glVertex2f(-2.28609, 8.69467);
    glVertex2f(3.61073, 8.691);
    glVertex2f(3.61073, 9.55755);
    glEnd();

    // lower cross
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 8.4398);
    glVertex2f(3.35435, -4.96963);
    glVertex2f(3.65347, -4.96982);
    glVertex2f(3.568, -4.30712);
    glVertex2f(-2.11516, 9.05137);
    glEnd();

    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.24336, -4.40545);
    glVertex2f(-2.24336, -4.96615);
    glVertex2f(-2.0297, -4.96629);
    glVertex2f(3.568, 7.82449);
    glVertex2f(3.568, 8.84395);
    glEnd();
    // end of lower cross
    glPopMatrix();
}

void shipMovement(int)
{
    glutPostRedisplay();
    glutTimerFunc(9, shipMovement, 0);

    if(ship_pos < 78)
    {
        ship_pos += .1;
    }

}

 void display3()
 {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    
    
    skyofdock();
    water();
    shadowBuildings();
    tower();
    firstCarrier();
    Crane();
    ground1();
    secondCarrier();
   
    house();
    shipofdock();
    
    
    
    glFlush();
 }

//---------------------------------------------- CANAL PART -----------------------------------
int currentDisplay = 1;
float move_gate_1=0.0f;
float move_gate_2=0.0f;
float move_gate_3=0.0f;
float move_gate_4=0.0f;
float move_gate_5=0.0f;
float move_gate_6=0.0f;
float move_gate_7=0.0f;
float move_gate_8=0.0f;

float move_ship_x=0;
float move_ship_y=0;

float move_water_1=0;
float move_water_2=0;
float move_water_3=0;
float move_water_4=0;
float move_water_5=0;
float move_water_6=0;
float move_water_7=0;

bool up_1=false;
bool down_1=false;
bool up_2=false;
bool down_2=false;
bool up_3=false;
bool down_3=false;
bool up_4=false;
bool down_4=false;
bool up_5=false;
bool down_5=false;
bool up_6=false;
bool down_6=false;
bool up_7=false;
bool down_7=false;
bool up_8=false;
bool down_8=false;

bool canal_1=false;
bool canal_2=false;
bool canal_3=false;
bool canal_4=false;
bool canal_5=false;
bool canal_6=false;
bool canal_7=false;

void FIRST_GATE()
{

    // ***************************1ST***** GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2d(-25,-4);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.75,.50);
    glVertex2d(-25,.50);
    glEnd();

    //*****1ST GATE RIGHT PART******
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.50,-4);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);
    glEnd();

    //******** STRIPE PART COLOR****




    glPushMatrix();
    glTranslatef(0,move_gate_1,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);

    glEnd();



    // STRIPE LINE
    glBegin(GL_LINES);
    glColor3ub(0,0,0);





    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.75,-1.75);

    glVertex2d(-24.50,-1.50);
    glVertex2d(-24.75,-1.50);

    glVertex2d(-24.50,-1.25);
    glVertex2d(-24.75,-1.25);

    glVertex2d(-24.50,-1);
    glVertex2d(-24.75,-1);

    glVertex2d(-24.50,-.75);
    glVertex2d(-24.75,-.75);

    glVertex2d(-24.50,-.50);
    glVertex2d(-24.75,-.50);

    glVertex2d(-24.50,-.25);
    glVertex2d(-24.75,-.25);

    glVertex2d(-24.50,-0);
    glVertex2d(-24.75,-0);

    glVertex2d(-24.50,0.25);
    glVertex2d(-24.75,0.25);

    glVertex2d(-24.50,0.50);
    glVertex2d(-24.75,0.50);
    glEnd();



    // STRIPE LINE BORDER


    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.5);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.75,.5);

    glEnd();

    glPopMatrix();



}

void upgate1_down(int value)
{
    if(down_1==true)
    {

         move_gate_1-=0.1;

    if(move_gate_1<-2.25)
    {
        move_gate_1=-2.25;
        down_1=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate1_down, 0);
}

void upgate1_up(int value)
{
    //move_gate_1 +=0.3;

    if(up_1==true)
    {
        move_gate_1+=0.1;

    if(move_gate_1>.25)
    {
        move_gate_1=.25;
        up_1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(25, upgate1_up, 0);

}

void SECOND_GATE()
{

     //*******************************2ND***** GATE PART

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);

    glVertex2d(-21,-4);
    glVertex2d(-20.75,-4);
    glVertex2d(-20.75,+2);
    glVertex2d(-21,+2);

    glEnd();


    //***RIGHT GATE RIGHT PART***

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);

    glVertex2d(-20.75,-4);
    glVertex2d(-20.50,-4);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_2,0);


    //STRIPE PART COLOR

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    //STRIPE LINE

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);

    glVertex2d(-20.75,-.75);
    glVertex2d(-20.50,-.75);

    glVertex2d(-20.75,-.50);
    glVertex2d(-20.50,-.50);

    glVertex2d(-20.75,-.25);
    glVertex2d(-20.50,-.25);


    glVertex2d(-20.75,-0);
    glVertex2d(-20.50,-0);

    glVertex2d(-20.75,.25);
    glVertex2d(-20.50,.25);

    glVertex2d(-20.75,.50);
    glVertex2d(-20.50,.50);


    glVertex2d(-20.75,.75);
    glVertex2d(-20.50,.75);

    glVertex2d(-20.75,1);
    glVertex2d(-20.50,1);

    glVertex2d(-20.75,1.25);
    glVertex2d(-20.50,1.25);

    glVertex2d(-20.75,1.5);
    glVertex2d(-20.50,1.5);

    glVertex2d(-20.75,1.75);
    glVertex2d(-20.50,1.75);

    glVertex2d(-20.75,2);
    glVertex2d(-20.50,2);


    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.75,2);

    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);

    glEnd();

    glPopMatrix();



}

void upgate2_down(int value)
{
    if(down_2==true)
    {

         move_gate_2-=0.1;

    if(move_gate_2<-3)
    {
        move_gate_2=-3;
        down_2=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate2_down, 0);
}

void upgate2_up(int value)
{
    if(up_2==true)
    {
        move_gate_2+=.1;
        if(move_gate_2>.1)
        {
            move_gate_2=.1;
            up_2=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate2_up, 0);
}

void sewage_canal_1()
{
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);



    //*****************************LOWER FLOOR PART ********
    glVertex2d(-26,-4);
    glVertex2d(-26,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-25,-4);
    glVertex2d(-25,-4.25);
    glVertex2d(-24.50,-4.25);
    glVertex2d(-24.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-21,-4);
    glVertex2d(-21,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();




    //************************WATER PART******************

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);

    glEnd();





    //************************ moving water*************************



    glPushMatrix();
    glTranslatef(0,move_water_1,0);
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);


    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);

    glEnd();
    glPopMatrix();

    //FIRST_GATE();
    //SECOND_GATE();

}

void canal1_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_1==true)
    {
        move_water_1+=0.1;
        move_ship_y +=.1;

    if(move_water_1>2)
    {
        move_water_1=2;
        canal_1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(40, canal1_up, 0);

}

void THIRD_GATE()
{
     //******************3RD GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-16,-3);
    glVertex2d(-15.75,-3);
    glVertex2d(-15.75,5);
    glVertex2d(-16,5);

    glEnd();


    //******************3RD GATE RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-15.75,-3);
    glVertex2d(-15.50,-3);
    glVertex2d(-15.50,3);
    glVertex2d(-15.75,3);

    glEnd();


    //******** STRIPE PART COLOR****

    glPushMatrix();
    glTranslatef(0,move_gate_3,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-15.75,1.50);
    glVertex2d(-15.50,1.50);
    glVertex2d(-15.50,5);
    glVertex2d(-15.75,5);

    glEnd();

    //*************** STRIPE LINE
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.50,1.5);
    glVertex2d(-15.75,1.5);

    glVertex2d(-15.5,1.75);
    glVertex2d(-15.75,1.75);

    glVertex2d(-15.5,2);
    glVertex2d(-15.75,2);

    glVertex2d(-15.5,2.25);
    glVertex2d(-15.75,2.25);

    glVertex2d(-15.5,2.5);
    glVertex2d(-15.75,2.5);

    glVertex2d(-15.5,2.75);
    glVertex2d(-15.75,2.75);

    glVertex2d(-15.5,3);
    glVertex2d(-15.75,3);

    glVertex2d(-15.5,3.25);
    glVertex2d(-15.75,3.25);

    glVertex2d(-15.5,3.5);
    glVertex2d(-15.75,3.5);

    glVertex2d(-15.5,3.75);
    glVertex2d(-15.75,3.75);

    glVertex2d(-15.5,4);
    glVertex2d(-15.75,4);

    glVertex2d(-15.5,4.25);
    glVertex2d(-15.75,4.25);

    glVertex2d(-15.5,4.5);
    glVertex2d(-15.75,4.5);

    glVertex2d(-15.5,4.75);
    glVertex2d(-15.75,4.75);

    glVertex2d(-15.5,5);
    glVertex2d(-15.75,5);

    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.75,1.5);
    glVertex2d(-15.75,5);

    glVertex2d(-15.5,1.5);
    glVertex2d(-15.5,5);

    glEnd();

    glPopMatrix();

}

void upgate3_down(int value)
{
    if(down_3==true)
    {

         move_gate_3-=0.1;

    if(move_gate_3<-4.5)
    {
        move_gate_3=-4.5;
        down_3=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate3_down, 0);

}

void upgate3_up(int value)
{
    if(up_3==true)
    {
        move_gate_3+=.1;
        if(move_gate_3>.1)
        {
            move_gate_3=.1;
            up_3=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate3_up, 0);
}

void sewage_canal_2()
{

    //*******************%%&%&%&%&%&%&%&%&%&%&% 2ND SWEAGE GATE**********************


    // ***************LOWER FLOOR PART
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);
    glVertex2d(-20.50,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-20.50,-3);
    glEnd();

    //****BOLD PART*********

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-16,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-16,-3);

    glEnd();





    //************************WATER PART******************

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );
    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);

    glEnd();



    //**********************************MOVING WATER************************

    glPushMatrix();
    glTranslatef(0,move_water_2,0);
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);

    glEnd();
    glPopMatrix();


   // THIRD_GATE();



}

void canal2_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_2==true)
    {
        move_water_2+=0.1;
        move_ship_y +=.1;

    if(move_water_2>2)
    {
        move_water_2=2;
        canal_2=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal2_up, 0);

}

void fourth_gate()
{
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_4,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();

    glPopMatrix();

}

void upgate4_down(int value)
{
    if(down_4==true)
    {

         move_gate_4-=0.1;

    if(move_gate_4<-5.5)
    {
        move_gate_4=-5.5;
        down_4=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate4_down, 0);

}

void upgate4_up(int value)
{
    if(up_4==true)
    {
        move_gate_4+=.1;
        if(move_gate_4>.1)
        {
            move_gate_4=.1;
            up_4=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate4_up, 0);
}

void sewage_canal_3()
{
    //lower part

    glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-15.50,-2);
   glVertex2d(-15.50,-2.25);
   glVertex2d(-9,-2.25);
   glVertex2d(-9,-2);
   glEnd();



   //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-9,-2);
    glVertex2d(-9,-2.25);
    glVertex2d(-8.50,-2.25);
    glVertex2d(-8.50,-2);
    glEnd();



   //water part

   glBegin(GL_POLYGON);
   glColor3ub(83, 164, 255 );

    glVertex2d(-15.50,-2);
    glVertex2d(-9,-2);
    glVertex2d(-9,2);
    glVertex2d(-15.50,2);
    glEnd();


    //moving water part

    glPushMatrix();
    glTranslatef(0,move_water_3,0);
    glBegin(GL_POLYGON);
   glColor3ub(83, 164, 255 );

   glVertex2d(-15.50,-1);
   glVertex2d(-8.75,-1);
   glVertex2d(-8.75,2);
   glVertex2d(-15.5,2);
   glEnd();
   glPopMatrix();


}

void canal3_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_3==true)
    {
        move_water_3+=0.1;
        move_ship_y +=.1;

    if(move_water_3>2)
    {
        move_water_3=2;
        canal_3=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal3_up, 0);

}
void fifth_gate()
{

    glPushMatrix();
    glTranslatef(15,0,0);
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_5,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);

    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();
    glPopMatrix();
    glPopMatrix();



}

void upgate5_down(int value)
{   if(down_5==true)
    {

         move_gate_5-=0.1;

    if(move_gate_5<-5.5)
    {
        move_gate_5=-5.5;
        down_5=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate5_down, 0);

}


void upgate5_up(int value)
{
      if(up_5==true)
    {
        move_gate_5+=.1;
        if(move_gate_5>.0)
        {
            move_gate_5=.0;
            up_5=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate5_up, 0);
}

void sewage_canal_4()
{
    //fourth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-2.25);
   glVertex2d(-8.75,-5.25);
   glVertex2d(-8.5,-5.25);
   glVertex2d(-8.5,-2.25);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-5.25);
   glVertex2d(6.25,-5.25);
   glVertex2d(6.25,-5);
   glVertex2d(-8.75,-5);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(6,-5);
   glVertex2d(6.25,-5);
   glVertex2d(6.25,-2.25);
   glVertex2d(6,-2.25);
   glEnd();





    // lower water part

    // fifth_gate();




    // water part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-8.50,-2);
    glVertex2d(6,-2);
    glVertex2d(6,4);
    glVertex2d(-8.50,4);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-8.5,-5);
    glVertex2d(6,-5);
    glVertex2d(6,-2);
    glVertex2d(-8.5,-2);
    glEnd();



    //bold part

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(6,-2);
    glVertex2d(6.0,-2.25);
    glVertex2d(6.50,-2.25);
    glVertex2d(6.50,-2);
    glEnd();

}

void sixth_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(11,-2);
    glVertex2d(11.25,-2);
    glVertex2d(11.25,4);
    glVertex2d(11,4);
    glEnd();


     //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(11.25,-2);
    glVertex2d(11.5,-2);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();


    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_6,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();

    //stripe lines

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);

    glVertex2d(11.25,1.25);
    glVertex2d(11.5,1.25);

    glVertex2d(11.25,1.5);
    glVertex2d(11.5,1.5);

    glVertex2d(11.25,1.75);
    glVertex2d(11.5,1.75);

    glVertex2d(11.25,2);
    glVertex2d(11.5,2);

    glVertex2d(11.25,2.25);
    glVertex2d(11.5,2.25);

    glVertex2d(11.25,2.5);
    glVertex2d(11.5,2.5);

    glVertex2d(11.25,2.75);
    glVertex2d(11.5,2.75);

    glVertex2d(11.25,3);
    glVertex2d(11.5,3);

    glVertex2d(11.25,3.25);
    glVertex2d(11.5,3.25);

    glVertex2d(11.25,3.5);
    glVertex2d(11.5,3.5);

    glVertex2d(11.25,3.75);
    glVertex2d(11.5,3.75);

    glVertex2d(11.25,4);
    glVertex2d(11.5,4);

    glEnd();


    //BORDER LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.5,1);
    glVertex2d(11.5,4);

    glVertex2d(11.25,1);
    glVertex2d(11.25,4);

    glEnd();
    glPopMatrix();


}

void upgate6_down(int value)
{
    if(down_6==true)
    {

         move_gate_6-=0.1;

    if(move_gate_6<-2.95)
    {
        move_gate_6=-2.95;
        down_6=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate6_down, 0);

}


void upgate6_up(int value)
{
    if(up_6==true)
    {
        move_gate_6+=.1;
        if(move_gate_6>.0)
        {
            move_gate_6=.0;
            up_6=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate6_up, 0);
}


void sewage_canal_5()
{

   // sixth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

    glVertex2d(6.50,-2);
    glVertex2d(6.50,-2.25);
    glVertex2d(11,-2.25);
    glVertex2d(11,-2);
    glEnd();

    //BOLD PART

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(11,-2);
    glVertex2d(11,-2.25);
    glVertex2d(11.5,-2.25);
    glVertex2d(11.5,-2);

    glEnd();


    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(6.50,-2);
    glVertex2d(11,-2);
    glVertex2d(11,2);
    glVertex2d(6.5,2);
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_5,0);

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(6.5,2);
    glVertex2d(11,2);
    glVertex2d(11,4);
    glVertex2d(6.5,4);
    glEnd();
    glPopMatrix();

}

void canal5_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_5==true)
    {
        move_water_5 -=0.1;
        move_ship_y  -=.1;

    if(move_water_5<-2)
    {
        move_water_5=-2;
        canal_5=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal5_up, 0);

}


void seventh_gate()
{

    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(17,-4);
    glVertex2d(17.25,-4);

    glVertex2d(17.25,3);
    glVertex2d(17,3);
    glEnd();


    //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(17.25,-4);
    glVertex2d(17.5,-4);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_7,0);
    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    //stripe line

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);

    glVertex2d(17.25,-.25);
    glVertex2d(17.5,-.25);


    glVertex2d(17.25,0.0);
    glVertex2d(17.5,0.0);

    glVertex2d(17.25,.25);
    glVertex2d(17.5,.25);

    glVertex2d(17.25,0.50);
    glVertex2d(17.5,0.50);

    glVertex2d(17.25,0.75);
    glVertex2d(17.5,0.75);

    glVertex2d(17.25,1);
    glVertex2d(17.5,1);

    glVertex2d(17.25,1.25);
    glVertex2d(17.5,1.25);

    glVertex2d(17.25,1.5);
    glVertex2d(17.5,1.5);

    glVertex2d(17.25,1.75);
    glVertex2d(17.5,1.75);

    glVertex2d(17.25,2);
    glVertex2d(17.5,2);

    glVertex2d(17.25,2.25);
    glVertex2d(17.5,2.25);

    glVertex2d(17.25,2.5);
    glVertex2d(17.5,2.5);

    glVertex2d(17.25,2.75);
    glVertex2d(17.5,2.75);

    glVertex2d(17.25,3);
    glVertex2d(17.5,3);

    glEnd();

    //BORDER STRIPE LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.5,-.5);
    glVertex2d(17.5,3);

    glEnd();

    glPopMatrix();


}

void upgate7_down(int value)
{
    if(down_7==true)
    {

         move_gate_7-=0.1;

    if(move_gate_7<-3.5)
    {
        move_gate_7=-3.5;
        down_7=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate7_down, 0);

}


void upgate7_up(int value)
{
    if(up_7==true)
    {
        move_gate_7+=.1;
        if(move_gate_7>.0)
        {
            move_gate_7=.0;
            up_7=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate7_up, 0);
}
void sewage_canal_6()
{
   // seventh_gate();
    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(11.50,-2);
   glVertex2d(11.50,-2.25);
   glVertex2d(12.75,-2.25);
   glVertex2d(12.75,-2);
   glVertex2d(11.50,-2);

   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(12.75,-2);
   glVertex2d(12.75,-4);
   glVertex2d(13,-4);
   glVertex2d(13,-2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(12.75,-4.25);
   glVertex2d(17,-4.25);
   glVertex2d(17,-4);
   glVertex2d(12.75,-4);

   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(17,-4);
    glVertex2d(17,-4.25);
    glVertex2d(17.5,-4.25);
    glVertex2d(17.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(11.5,-2);
    glVertex2d(17,-2);
    glVertex2d(17,0);
    glVertex2d(11.5,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );
    glVertex2d(13,-2);
    glVertex2d(13,-4);
    glVertex2d(17,-4);
    glVertex2d(17,-2);
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_6,0);

     glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(11.5,0);
    glVertex2d(17,0);
    glVertex2d(17,2);
    glVertex2d(11.5,2);
    glEnd();
    glPopMatrix();

}

void canal6_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_6==true)
    {
        move_water_6 -=0.1;
        move_ship_y  -=.1;

    if(move_water_6<-2)
    {
        move_water_6=-2;
        canal_6=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal6_up, 0);

}


void eight_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(23,-4);
    glVertex2d(23.25,-4);
    glVertex2d(23.25,2);
    glVertex2d(23,2);
    glEnd();


     //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(23.25,-4);
    glVertex2d(23.5,-4);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    glPushMatrix();
    glTranslatef(0,move_gate_8,0);

    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    //stripe line
    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);

    glVertex2d(23.25,-.75);
    glVertex2d(23.5,-.75);

    glVertex2d(23.25,-.5);
    glVertex2d(23.5,-.5);

    glVertex2d(23.25,-.25);
    glVertex2d(23.5,-.25);

    glVertex2d(23.25,-0);
    glVertex2d(23.5,-0);

    glVertex2d(23.25,.25);
    glVertex2d(23.5,0.25);

    glVertex2d(23.25,0.5);
    glVertex2d(23.5,0.5);

    glVertex2d(23.25,0.75);
    glVertex2d(23.5,0.75);

    glVertex2d(23.25,1);
    glVertex2d(23.5,1);

    glVertex2d(23.25,1.25);
    glVertex2d(23.5,1.25);

    glVertex2d(23.25,1.5);
    glVertex2d(23.5,1.5);

    glVertex2d(23.25,1.75);
    glVertex2d(23.5,1.75);

    glVertex2d(23.25,2);
    glVertex2d(23.5,2);


    glEnd();


    //BORDER LINE

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glEnd();
    glPopMatrix();


}

void upgate8_down(int value)
{
    if(down_8==true)
    {

         move_gate_8-=0.1;

    if(move_gate_8<-3)
    {
        move_gate_8=-3;
        down_8=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate8_down, 0);

}


void upgate8_up(int value)
{
    if(up_8==true)
    {
        move_gate_8+=.1;
        if(move_gate_8>.0)
        {
            move_gate_8=.0;
            up_8=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate8_up, 0);
}
void sewage_canal_7()
{
   // eigth_gate();

    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(17.50,-4);
   glVertex2d(17.50,-4.25);
   glVertex2d(23,-4.25);
   glVertex2d(23,-4);

   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(23,-4);
    glVertex2d(23,-4.25);
    glVertex2d(23.5,-4.25);
    glVertex2d(23.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(17.5,-4);
    glVertex2d(23,-4);
    glVertex2d(23,-2);
    glVertex2d(17.5,-2);
    glEnd();

    //moving water part
    glPushMatrix();
    glTranslatef(0,move_water_7,0);

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(17.5,-2);
    glVertex2d(23,-2);
    glVertex2d(23,0);
    glVertex2d(17.5,0);
    glEnd();
    glPopMatrix();

}

void canal7_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_7==true)
    {
        move_water_7 -=0.1;
        move_ship_y  -=.1;

    if(move_water_7<-2)
    {
        move_water_7=-2;
        canal_7=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal7_up, 0);

}

void mountain_front()
{
    glPushMatrix();

    //mountain part
    glTranslatef(0,3,0);
    glScalef(32,18,0);
    glBegin(GL_TRIANGLE_FAN);

            glColor3ub(152, 217, 12);
            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);

            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107, 207, 94);
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(23, 129, 8);
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(23, 129, 8);
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.373f, 0.092f);
            glVertex2f(0.424f, 0.096f);
            glVertex2f(0.424f, -0.153f);
            glVertex2f(0.337f, -0.125f);
            glVertex2f(0.355f, 0.096f);
            glEnd();


            //********shadow part


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.836f, 0.128f);
            glVertex2f(-0.743f, 0.231f);
            glVertex2f(-0.780f, 0.164f);
            glVertex2f(-0.798f, 0.049f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.909f, 0.195f);
            glVertex2f(-0.892f, 0.156f);
            glVertex2f(-0.876f, 0.211f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.672f, 0.203f);
            glVertex2f(-0.660f, 0.187f);
            glVertex2f(-0.709f, 0.124f);
            glVertex2f(-0.707f, 0.128f);
            glVertex2f(-0.740f, 0.152f);
            glVertex2f(-0.654f, 0.266f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.467f, 0.373f);
            glVertex2f(-0.467f, 0.353f);
            glVertex2f(-0.467f, 0.345f);
            glVertex2f(-0.467f, 0.342f);
            glVertex2f(-0.494f, 0.274f);
            glVertex2f(-0.494f, 0.27f);
            glVertex2f(-0.518f, 0.239f);
            glVertex2f(-0.532f, 0.219f);
            glVertex2f(-0.645f, 0.235f);
            glVertex2f(-0.645f, 0.231f);
            glVertex2f(-0.454f, 0.523f);
            glVertex2f(-0.454f, 0.472f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.432f);
            glVertex2f(-0.469f, 0.428f);
            glVertex2f(-0.469f, 0.417f);
            glVertex2f(-0.469f, 0.405f);
            glVertex2f(-0.469f, 0.397f);
            glVertex2f(-0.467f, 0.393f);
            glVertex2f(-0.467f, 0.381f);
            glVertex2f(-0.467f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.392f, 0.16f);
            glVertex2f(-0.445f, 0.318f);
            glVertex2f(-0.449f, 0.247f);
            glVertex2f(-0.429f, 0.172f);
            glVertex2f(-0.458f, -0.066f);
            glVertex2f(-0.447f, -0.109f);
            glVertex2f(-0.438f, -0.105f);
            glVertex2f(-0.360f, -0.089f);
            glVertex2f(-0.292f, -0.022f);
            glVertex2f(-0.327f, 0.085f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.332f, 0.338f);
            glVertex2f(-0.289f, 0.298f);
            glVertex2f(-0.298f, 0.247f);
            glVertex2f(-0.369f, 0.255f);
            glVertex2f(-0.367f, 0.251f);
            glVertex2f(-0.389f, 0.334f);
            glVertex2f(-0.383f, 0.401f);
            glVertex2f(-0.387f, 0.432f);
            glVertex2f(-0.358f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.285f, 0.243f);
            glVertex2f(-0.263f, 0.306f);
            glVertex2f(-0.249f, 0.255f);
            glVertex2f(-0.294f, 0.179f);
            glVertex2f(-0.352f, 0.164f);
            glVertex2f(-0.352f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.143f, 0.168f);
            glVertex2f(-0.209f, 0.1f);
            glVertex2f(-0.209f, 0.104f);
            glVertex2f(-0.165f, 0.215f);
            glVertex2f(-0.134f, 0.239f);
            glVertex2f(-0.112f, 0.215f);
            glVertex2f(-0.112f, 0.168f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.176f, -0.018f);
            glVertex2f(-0.156f, 0.021f);
            glVertex2f(-0.152f, 0.112f);
            glVertex2f(-0.138f, 0.14f);
            glVertex2f(-0.134f, 0.092f);
            glVertex2f(-0.123f, 0.057f);
            glVertex2f(-0.123f, -0.006f);
            glVertex2f(-0.147f, -0.085f);
            glVertex2f(-0.145f, -0.105f);
            glVertex2f(-0.263f, -0.097f);
            glVertex2f(-0.267f, -0.097f);
            glVertex2f(-0.205f, -0.05f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.040f, 0.128f);
            glVertex2f(0.155f, 0.175f);
            glVertex2f(0.180f, 0.116f);
            glVertex2f(0.257f, 0.136f);
            glVertex2f(0.291f, -0.042f);
            glVertex2f(0.128f, 0.017f);
            glVertex2f(0.082f, -0.117f);
            glVertex2f(-0.043f, -0.097f);
            glVertex2f(-0.040f, -0.097f);
            glVertex2f(-0.058f, -0.034f);
            glVertex2f(-0.036f, 0.037f);
            glVertex2f(-0.074f, 0.081f);
            glVertex2f(-0.060f, 0.12f);
            glVertex2f(-0.034f, 0.096f);
            glVertex2f(-0.083f, 0.215f);
            glVertex2f(0.008f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.404f, 0.092f);
            glVertex2f(0.340f, 0.073f);
            glVertex2f(0.333f, 0.069f);
            glVertex2f(0.462f, 0.152f);
            glVertex2f(0.413f, 0.069f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.673f, 0.243f);
            glVertex2f(0.573f, 0.16f);
            glVertex2f(0.568f, 0.16f);
            glVertex2f(0.633f, 0.239f);
            glVertex2f(0.635f, 0.266f);
            glVertex2f(0.753f, 0.413f);
            glVertex2f(0.755f, 0.365f);
            glVertex2f(0.737f, 0.33f);
            glVertex2f(0.737f, 0.302f);
            glVertex2f(0.744f, 0.286f);
            glVertex2f(0.742f, 0.239f);
            glVertex2f(0.715f, 0.183f);
            glVertex2f(0.677f, 0.148f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.646f, -0.002f);
            glVertex2f(0.528f, -0.105f);
            glVertex2f(0.526f, -0.105f);
            glVertex2f(0.520f, -0.038f);
            glVertex2f(0.548f, -0.018f);
            glVertex2f(0.566f, 0.037f);
            glVertex2f(0.631f, 0.096f);
            glVertex2f(0.688f, 0.1f);
            glVertex2f(0.728f, 0.164f);
            glVertex2f(0.728f, 0.124f);
            glVertex2f(0.688f, 0.033f);
            glVertex2f(0.753f, 0.033f);
            glVertex2f(0.740f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.815f, 0.089f);
            glVertex2f(0.886f, 0.013f);
            glVertex2f(0.920f, -0.074f);
            glVertex2f(0.840f, -0.125f);
            glVertex2f(0.844f, -0.121f);
            glVertex2f(0.777f, -0.018f);
            glVertex2f(0.771f, -0.042f);
            glVertex2f(0.751f, 0.021f);
            glVertex2f(0.780f, 0.108f);
            glVertex2f(0.760f, 0.172f);
            glVertex2f(0.764f, 0.239f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.853f, 0.282f);
            glVertex2f(0.922f, 0.215f);
            glVertex2f(0.908f, 0.168f);
            glVertex2f(0.908f, 0.172f);
            glVertex2f(0.840f, 0.179f);
            glVertex2f(0.820f, 0.243f);
            glVertex2f(0.826f, 0.298f);
            glVertex2f(0.820f, 0.349f);
            glVertex2f(0.844f, 0.31f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.915f, 0.156f);
            glVertex2f(0.948f, 0.227f);
            glVertex2f(0.960f, 0.179f);
            glVertex2f(0.915f, 0.108f);
            glVertex2f(0.857f, 0.096f);
            glVertex2f(0.857f, 0.092f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.997f, 0.136f);
            glVertex2f(0.997f, 0.199f);
            glVertex2f(0.977f, 0.211f);
            glVertex2f(0.995f, 0.179f);
            glVertex2f(0.960f, 0.092f);
            glVertex2f(0.960f, 0.1f);
            glVertex2f(0.962f, 0.049f);
            glEnd();


            // GREEN SHADE

            glPushMatrix();
            glTranslatef(0,-0.06,0);


              glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.663f, 0.405f);
            glVertex2f(-0.658f, 0.393f);
            glVertex2f(-0.656f, 0.389f);
            glVertex2f(-0.647f, 0.373f);
            glVertex2f(-0.643f, 0.369f);
            glVertex2f(-0.640f, 0.369f);
            glVertex2f(-0.636f, 0.369f);
            glVertex2f(-0.629f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.623f, 0.369f);
            glVertex2f(-0.618f, 0.369f);
            glVertex2f(-0.623f, 0.377f);
            glVertex2f(-0.625f, 0.377f);
            glVertex2f(-0.629f, 0.385f);
            glVertex2f(-0.634f, 0.393f);
            glVertex2f(-0.638f, 0.397f);
            glVertex2f(-0.640f, 0.405f);
            glVertex2f(-0.652f, 0.413f);
            glVertex2f(-0.656f, 0.417f);
            glVertex2f(-0.660f, 0.421f);
            glVertex2f(-0.665f, 0.421f);
            glVertex2f(-0.674f, 0.428f);
            glVertex2f(-0.678f, 0.44f);
            glVertex2f(-0.683f, 0.448f);
            glVertex2f(-0.687f, 0.456f);
            glVertex2f(-0.689f, 0.46f);
            glVertex2f(-0.694f, 0.464f);
            glVertex2f(-0.696f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.700f, 0.46f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.698f, 0.428f);
            glVertex2f(-0.698f, 0.425f);
            glVertex2f(-0.696f, 0.417f);
            glVertex2f(-0.692f, 0.417f);
            glVertex2f(-0.687f, 0.417f);
            glVertex2f(-0.683f, 0.413f);
            glVertex2f(-0.674f, 0.409f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.849f, 0.013f);
            glVertex2f(-0.803f, 0.033f);
            glVertex2f(-0.780f, 0.073f);
            glVertex2f(-0.752f, 0.112f);
            glVertex2f(-0.723f, 0.124f);
            glVertex2f(-0.732f, 0.053f);
            glVertex2f(-0.754f, 0.037f);
            glVertex2f(-0.812f, -0.018f);
            glVertex2f(-0.840f, -0.101f);
            glVertex2f(-0.863f, -0.125f);
            glVertex2f(-0.889f, -0.137f);
            glVertex2f(-0.912f, -0.153f);
            glVertex2f(-0.920f, -0.16f);
            glVertex2f(-0.925f, -0.16f);
            glVertex2f(-0.934f, -0.149f);
            glVertex2f(-0.927f, -0.141f);
            glVertex2f(-0.889f, -0.089f);
            glVertex2f(-0.885f, -0.05f);
            glVertex2f(-0.889f, -0.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.414f, 0.492f);
            glVertex2f(-0.405f, 0.48f);
            glVertex2f(-0.400f, 0.476f);
            glVertex2f(-0.394f, 0.472f);
            glVertex2f(-0.392f, 0.476f);
            glVertex2f(-0.392f, 0.48f);
            glVertex2f(-0.392f, 0.492f);
            glVertex2f(-0.394f, 0.5f);
            glVertex2f(-0.396f, 0.5f);
            glVertex2f(-0.398f, 0.504f);
            glVertex2f(-0.452f, 0.587f);
            glVertex2f(-0.445f, 0.559f);
            glVertex2f(-0.445f, 0.535f);
            glVertex2f(-0.436f, 0.515f);
            glVertex2f(-0.423f, 0.5f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.582f, 0.258f);
            glVertex2f(0.595f, 0.27f);
            glVertex2f(0.611f, 0.29f);
            glVertex2f(0.624f, 0.302f);
            glVertex2f(0.631f, 0.326f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.508f, 0.199f);
            glVertex2f(0.520f, 0.199f);
            glVertex2f(0.531f, 0.199f);
            glVertex2f(0.542f, 0.203f);
            glVertex2f(0.551f, 0.223f);
            glVertex2f(0.566f, 0.243f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.551f, 0.251f);
            glVertex2f(0.568f, 0.274f);
            glVertex2f(0.582f, 0.286f);
            glVertex2f(0.588f, 0.29f);
            glVertex2f(0.595f, 0.29f);
            glVertex2f(0.606f, 0.298f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.207f);
            glVertex2f(0.513f, 0.219f);
            glVertex2f(0.520f, 0.223f);
            glVertex2f(0.526f, 0.223f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.975f, -0.042f);
            glVertex2f(0.988f, -0.038f);
            glVertex2f(0.991f, -0.038f);
            glVertex2f(0.993f, -0.034f);
            glVertex2f(0.993f, -0.03f);
            glVertex2f(0.993f, -0.014f);
            glVertex2f(0.993f, -0.006f);
            glVertex2f(0.995f, -0.006f);
            glVertex2f(1.000f, -0.006f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.928f, -0.153f);
            glVertex2f(0.951f, -0.105f);
            glVertex2f(0.951f, -0.062f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.304f, 0.215f);
            glVertex2f(0.322f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.337f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.183f);
            glVertex2f(0.357f, 0.164f);
            glVertex2f(0.368f, 0.164f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.391f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.233f, 0.29f);
            glVertex2f(0.235f, 0.278f);
            glVertex2f(0.240f, 0.266f);
            glVertex2f(0.242f, 0.266f);
            glVertex2f(0.244f, 0.262f);
            glVertex2f(0.251f, 0.262f);
            glVertex2f(0.257f, 0.251f);
            glVertex2f(0.268f, 0.239f);
            glVertex2f(0.286f, 0.231f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.473f, 0.045f);
            glVertex2f(0.473f, 0.092f);
            glVertex2f(0.482f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.491f, 0.096f);
            glVertex2f(0.491f, 0.057f);
            glVertex2f(0.480f, 0.033f);
            glVertex2f(0.466f, 0.013f);
            glVertex2f(0.464f, 0.013f);
            glVertex2f(0.455f, 0.013f);
            glVertex2f(0.448f, 0.013f);
            glVertex2f(0.448f, 0.009f);
            glVertex2f(0.442f, -0.014f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, 0.009f);
            glVertex2f(0.435f, 0.021f);
            glVertex2f(0.444f, 0.021f);
            glVertex2f(0.446f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.600f, 0.152f);
            glVertex2f(-0.580f, 0.164f);
            glVertex2f(-0.576f, 0.183f);
            glVertex2f(-0.569f, 0.203f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.558f, 0.239f);
            glVertex2f(-0.558f, 0.219f);
            glVertex2f(-0.567f, 0.179f);
            glVertex2f(-0.576f, 0.164f);
            glVertex2f(-0.585f, 0.152f);
            glVertex2f(-0.596f, 0.136f);
            glVertex2f(-0.614f, 0.1f);
            glVertex2f(-0.620f, 0.069f);
            glVertex2f(-0.620f, 0.061f);
            glVertex2f(-0.623f, 0.061f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.620f, 0.092f);
            glVertex2f(-0.612f, 0.128f);
            glVertex2f(-0.612f, 0.152f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.813f, 0.397f);
            glVertex2f(0.820f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.771f, 0.452f);
            glVertex2f(0.813f, 0.357f);
            glVertex2f(0.813f, 0.373f);
            glVertex2f(0.813f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.784f, 0.46f);
            glVertex2f(0.773f, 0.472f);
            glVertex2f(0.768f, 0.472f);
            glVertex2f(0.768f, 0.468f);
            glVertex2f(0.773f, 0.448f);
            glVertex2f(0.773f, 0.444f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.797f, 0.436f);
            glVertex2f(0.791f, 0.452f);
            glEnd();
            glPopMatrix();
            glPopMatrix();
}
void ground()
{
    glPushMatrix();
    glTranslatef(-.5,2,0);
    glScalef(32,18,0);


    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );

            glVertex2f(-0.778f, -0.307f);
            glVertex2f(-0.747f, -0.299f);
            glVertex2f(-0.740f, -0.299f);
            glVertex2f(-0.725f, -0.299f);
            glVertex2f(-0.712f, -0.299f);


           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.689f, -0.299f);
            glVertex2f(-0.674f, -0.299f);
            glVertex2f(-0.658f, -0.299f);
            glVertex2f(-0.652f, -0.299f);
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.634f, -0.299f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.326f);
            glVertex2f(-0.627f, -0.374f);
            glVertex2f(-0.627f, -0.406f);
            glVertex2f(-0.629f, -0.998f);
            glVertex2f(-1.003f, -0.994f);
            glVertex2f(-0.998f, -0.453f);
            glVertex2f(-1.003f, -0.457f);
            glVertex2f(-0.960f, -0.469f);
            glVertex2f(-0.932f, -0.465f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(-0.900f, -0.402f);
            glVertex2f(-0.892f, -0.378f);
            glVertex2f(-0.885f, -0.362f);
            glVertex2f(-0.874f, -0.35f);
            glVertex2f(-0.872f, -0.35f);
            glVertex2f(-0.865f, -0.342f);
            glVertex2f(-0.858f, -0.338f);
            glVertex2f(-0.854f, -0.338f);
            glVertex2f(-0.845f, -0.334f);
            glVertex2f(-0.838f, -0.33f);
            glVertex2f(-0.820f, -0.323f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.814f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );
            glVertex2f(-0.660f, -0.303f);
            glVertex2f(-0.660f, -0.24f);
            glVertex2f(-0.454f, -0.243f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.449f, -0.998f);
            glVertex2f(-0.638f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43  );
            glVertex2f(-0.523f, -0.267f);
            glVertex2f(-0.520f, -0.192f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(0.386f, -0.176f);
            glVertex2f(0.391f, -1.002f);
            glVertex2f(-0.463f, -0.998f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );
            glVertex2f(0.422f, -0.291f);
            glVertex2f(0.717f, -0.287f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(0.717f, -1.002f);
            glVertex2f(0.377f, -1.002f);
            glVertex2f(0.382f, -0.2f);
            glVertex2f(0.420f, -0.2f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43  );
            glVertex2f(0.824f, -0.398f);
            glVertex2f(0.895f, -0.433f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(0.991f, -0.429f);
            glVertex2f(0.991f, -1.002f);
            glVertex2f(0.702f, -1.002f);
            glVertex2f(0.713f, -0.307f);
            glVertex2f(0.751f, -0.334f);
            glVertex2f(0.782f, -0.366f);
            glEnd();


            glPushMatrix();
            glTranslatef(.02,-.1,0);
              glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43);
            glVertex2f(-0.998f, -1.002f);
            glVertex2f(-1.003f, -0.789f);
           //glColor3ub(145, 102, 32 );
            glVertex2f(1.000f, -0.789f);
            glVertex2f(1.002f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(204, 143, 43);
            glVertex2f(0.953f, -0.326f);
            glVertex2f(0.951f, -0.323f);
            glVertex2f(1.002f, -0.323f);
            glVertex2f(1.002f, -0.805f);
            glVertex2f(0.971f, -0.797f);
            glEnd();

            glPopMatrix();
            glPopMatrix();
}

void mountain_back()

{


    glPushMatrix();
    glTranslated(0,3,0);
    glScalef(32,18,0);

     glBegin(GL_TRIANGLE_FAN);

            glColor3ub(188,199,200);
            glVertex2f(-0.878f, 0.29f);
            glVertex2f(-0.847f, 0.353f);
            glVertex2f(-0.780f, 0.389f);
            glVertex2f(-0.747f, 0.425f);
            glVertex2f(-0.712f, 0.389f);
            glVertex2f(-0.712f, 0.069f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.262f);
            glVertex2f(-1.003f, 0.258f);
            glVertex2f(-0.960f, 0.266f);
            glVertex2f(-0.923f, 0.298f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(-0.056f, 0.361f);
            glVertex2f(-0.038f, 0.338f);
            glVertex2f(-0.007f, 0.381f);
            glVertex2f(0.051f, 0.302f);
            glVertex2f(0.077f, 0.318f);
            glVertex2f(0.140f, 0.247f);
            glVertex2f(0.153f, 0.266f);
            glVertex2f(0.180f, 0.211f);
            glVertex2f(0.188f, 0.049f);
            glVertex2f(-0.294f, 0.061f);
            glVertex2f(-0.278f, 0.338f);
            glVertex2f(-0.278f, 0.334f);
            glVertex2f(-0.254f, 0.353f);
            glVertex2f(-0.232f, 0.334f);
            glVertex2f(-0.189f, 0.421f);
            glVertex2f(-0.176f, 0.389f);
            glVertex2f(-0.156f, 0.428f);
            glVertex2f(-0.094f, 0.353f);
            glVertex2f(-0.083f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(0.460f, 0.33f);
            glVertex2f(0.504f, 0.274f);
            glVertex2f(0.522f, 0.306f);
            glVertex2f(0.597f, 0.219f);
            glVertex2f(0.597f, 0.037f);
            glVertex2f(0.273f, 0.021f);
            glVertex2f(0.266f, 0.203f);
            glVertex2f(0.264f, 0.203f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(0.955f, 0.262f);
            glVertex2f(1.002f, 0.243f);
            glVertex2f(1.000f, 0.132f);
            glVertex2f(0.933f, 0.128f);
            glVertex2f(0.933f, 0.239f);
            glVertex2f(0.931f, 0.243f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
           glColor3ub(188,199,200);
            glVertex2f(-0.958f, 0.057f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-0.954f, 0.025f);
            glEnd();



            //*******************************snow*********************************

            glPushMatrix();
            glTranslatef(0,-.1,0);


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.453f, 0.33f);
            glVertex2f(0.460f, 0.322f);
            glVertex2f(0.462f, 0.318f);
            glVertex2f(0.464f, 0.318f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.482f, 0.338f);
            glVertex2f(0.491f, 0.338f);
            glVertex2f(0.495f, 0.334f);
            glVertex2f(0.495f, 0.33f);
            glVertex2f(0.497f, 0.326f);
            glVertex2f(0.502f, 0.326f);
            glVertex2f(0.506f, 0.318f);
            glVertex2f(0.511f, 0.318f);
            glVertex2f(0.515f, 0.314f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.522f, 0.302f);
            glVertex2f(0.526f, 0.294f);
            glVertex2f(0.582f, 0.345f);
            glVertex2f(0.522f, 0.413f);
            glVertex2f(0.457f, 0.432f);
            glVertex2f(0.380f, 0.377f);
            glVertex2f(0.380f, 0.365f);
            glVertex2f(0.386f, 0.349f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.400f, 0.345f);
            glVertex2f(0.404f, 0.345f);
            glVertex2f(0.406f, 0.349f);
            glVertex2f(0.408f, 0.349f);
            glVertex2f(0.417f, 0.338f);
            glVertex2f(0.420f, 0.326f);
            glVertex2f(0.426f, 0.314f);
            glVertex2f(0.428f, 0.314f);
            glVertex2f(0.435f, 0.318f);
            glVertex2f(0.435f, 0.322f);
            glVertex2f(0.440f, 0.326f);
            glVertex2f(0.440f, 0.33f);
            glVertex2f(0.442f, 0.334f);
            glVertex2f(0.444f, 0.334f);
            glVertex2f(0.446f, 0.338f);
            glVertex2f(0.448f, 0.338f);
            glVertex2f(0.451f, 0.338f);
            glEnd();

               glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.956f, 0.33f);
            glVertex2f(-0.956f, 0.334f);
            glVertex2f(-0.952f, 0.338f);
            glVertex2f(-0.947f, 0.338f);
            glVertex2f(-0.940f, 0.334f);
            glVertex2f(-0.936f, 0.33f);
            glVertex2f(-0.934f, 0.33f);
            glVertex2f(-0.932f, 0.33f);
            glVertex2f(-0.927f, 0.33f);
            glVertex2f(-0.923f, 0.33f);
            glVertex2f(-0.920f, 0.326f);
            glVertex2f(-0.918f, 0.318f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.912f, 0.314f);
            glVertex2f(-0.892f, 0.401f);
            glVertex2f(-0.909f, 0.397f);
            glVertex2f(-0.923f, 0.401f);
            glVertex2f(-0.925f, 0.405f);
            glVertex2f(-0.949f, 0.373f);
            glVertex2f(-0.960f, 0.373f);
            glVertex2f(-0.987f, 0.369f);
            glVertex2f(-1.003f, 0.334f);
            glVertex2f(-0.998f, 0.334f);
            glVertex2f(-0.994f, 0.33f);
            glVertex2f(-0.994f, 0.326f);
            glVertex2f(-0.992f, 0.318f);
            glVertex2f(-0.985f, 0.306f);
            glVertex2f(-0.985f, 0.302f);
            glVertex2f(-0.983f, 0.298f);
            glVertex2f(-0.980f, 0.298f);
            glVertex2f(-0.980f, 0.306f);
            glVertex2f(-0.978f, 0.306f);
            glVertex2f(-0.976f, 0.306f);
            glVertex2f(-0.974f, 0.302f);
            glVertex2f(-0.969f, 0.302f);
            glVertex2f(-0.967f, 0.302f);
            glVertex2f(-0.960f, 0.314f);
            glVertex2f(-0.958f, 0.322f);
            glVertex2f(-0.956f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.989f, 0.365f);
            glVertex2f(-1.000f, 0.342f);
            glVertex2f(-1.000f, 0.369f);
            glVertex2f(-0.987f, 0.369f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.814f, 0.409f);
            glVertex2f(-0.812f, 0.413f);
            glVertex2f(-0.803f, 0.413f);
            glVertex2f(-0.798f, 0.413f);
            glVertex2f(-0.796f, 0.413f);
            glVertex2f(-0.792f, 0.413f);
            glVertex2f(-0.787f, 0.428f);
            glVertex2f(-0.780f, 0.44f);
            glVertex2f(-0.774f, 0.44f);
            glVertex2f(-0.772f, 0.436f);
            glVertex2f(-0.769f, 0.436f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.760f, 0.417f);
            glVertex2f(-0.754f, 0.417f);
            glVertex2f(-0.749f, 0.413f);
            glVertex2f(-0.749f, 0.409f);
            glVertex2f(-0.709f, 0.484f);
            glVertex2f(-0.745f, 0.519f);
            glVertex2f(-0.760f, 0.504f);
            glVertex2f(-0.776f, 0.488f);
            glVertex2f(-0.776f, 0.476f);
            glVertex2f(-0.803f, 0.468f);
            glVertex2f(-0.834f, 0.452f);
            glVertex2f(-0.847f, 0.452f);
            glVertex2f(-0.876f, 0.397f);
            glVertex2f(-0.905f, 0.385f);
            glVertex2f(-0.900f, 0.377f);
            glVertex2f(-0.889f, 0.369f);
            glVertex2f(-0.872f, 0.369f);
            glVertex2f(-0.872f, 0.373f);
            glVertex2f(-0.869f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.860f, 0.389f);
            glVertex2f(-0.854f, 0.389f);
            glVertex2f(-0.840f, 0.389f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.829f, 0.365f);
            glVertex2f(-0.827f, 0.369f);
            glVertex2f(-0.823f, 0.373f);
            glVertex2f(-0.816f, 0.381f);
            glVertex2f(-0.814f, 0.389f);
            glVertex2f(-0.814f, 0.397f);
            glVertex2f(-0.814f, 0.405f);
            glEnd();
            glPopMatrix();

            //*********background mountain shadow


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.943f, 0.251f);
            glVertex2f(-0.920f, 0.286f);
            glVertex2f(-0.903f, 0.286f);
            glVertex2f(-0.920f, 0.219f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.983f, 0.251f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.798f, 0.334f);
            glVertex2f(-0.763f, 0.393f);
            glVertex2f(-0.754f, 0.409f);
            glVertex2f(-0.754f, 0.385f);
            glVertex2f(-0.785f, 0.322f);
            glVertex2f(-0.820f, 0.298f);
            glVertex2f(-0.820f, 0.294f);
            glVertex2f(-0.814f, 0.334f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.169f, 0.369f);
            glVertex2f(-0.152f, 0.389f);
            glVertex2f(-0.152f, 0.417f);
            glVertex2f(-0.218f, 0.322f);
            glVertex2f(-0.216f, 0.326f);
            glVertex2f(-0.192f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.140f, 0.29f);
            glVertex2f(-0.154f, 0.247f);
            glVertex2f(-0.152f, 0.243f);
            glVertex2f(-0.163f, 0.294f);
            glVertex2f(-0.143f, 0.397f);
            glVertex2f(-0.118f, 0.373f);
            glVertex2f(-0.114f, 0.345f);
            glVertex2f(-0.116f, 0.314f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.045f, 0.302f);
            glVertex2f(-0.014f, 0.361f);
            glVertex2f(-0.009f, 0.326f);
            glVertex2f(0.002f, 0.302f);
            glVertex2f(-0.049f, 0.278f);
            glVertex2f(-0.067f, 0.251f);
            glVertex2f(-0.069f, 0.247f);
            glVertex2f(-0.069f, 0.278f);
            glVertex2f(-0.058f, 0.302f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.028f, 0.314f);
            glVertex2f(0.002f, 0.353f);
            glVertex2f(0.026f, 0.262f);
            glVertex2f(0.026f, 0.266f);
            glVertex2f(0.042f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.411f, 0.243f);
            glVertex2f(0.460f, 0.314f);
            glVertex2f(0.455f, 0.282f);
            glVertex2f(0.426f, 0.235f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.397f, 0.235f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.495f, 0.27f);
            glVertex2f(0.524f, 0.282f);
            glVertex2f(0.562f, 0.239f);
            glVertex2f(0.473f, 0.219f);
            glVertex2f(0.475f, 0.219f);
            glEnd();

            glPopMatrix();
}

void sidewater()
{
    //left part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-32,-7);
    glVertex2d(-25,-7);
    glVertex2d(-25,-2);
    glVertex2d(-32,-2);
    glEnd();

    //right part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(23.50,-2);
    glVertex2d(23.50,-6);
    glVertex2d(32,-6);
    glVertex2d(32,-2);
    glEnd();





}


void drain()

{
    //first canal


    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);
    glVertex2d(-22.75,-9);
    glVertex2d(-22.75,-4);

    glEnd();


    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);

    glVertex2d(-22.75,-4);
    glVertex2d(-22.75,-9);
   // glVertex2d(-22.75,-4);

    glEnd();

    //fourth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-1,-5);
    glVertex2d(-1,-9);
    glVertex2d(0,-9);
    glVertex2d(0,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-1,-9);
    glVertex2d(-1,-5);

    glVertex2d(0,-5);
    glVertex2d(0,-9);
    glEnd();

    //thrird canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    //2nd canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-18.25,-3);
    glVertex2d(-18.25,-9);
    glVertex2d(-17.75,-9);
    glVertex2d(-17.75,-3);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-18.25,-9);
    glVertex2d(-18.25,-3);
    glVertex2d(-17.75,-3);
    glVertex2d(-17.75,-9);
    glEnd();

    //fifth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(8.25,-2);
    glVertex2d(8.25,-9);
    glVertex2d(8.75,-9);
    glVertex2d(8.75,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(8.25,-9);
    glVertex2d(8.25,-2);
    glVertex2d(8.75,-2);
    glVertex2d(8.75,-9);
    glEnd();

    //sixth canal
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    //8th canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    //main pipe

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-32,-9);
    glVertex2d(-32,-10);
    glVertex2d(32,-10);
    glVertex2d(32,-9);
    glEnd();
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-32,-9);
    glVertex2d(32,-9);
    glVertex2d(32,-10);
    glVertex2d(-32,-10);
    glEnd();



}



void ship1()
{
    glPushMatrix();
    glTranslatef(move_ship_x,move_ship_y,0);

    glPushMatrix();
    glScalef(.035,.05,0);
    glTranslatef(-790,-40,0);
    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    setColor("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    setColor("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    setColor("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    setColor("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    setColor("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    setColor("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    setColor("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    setColor("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    setColor("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    setColor("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    setColor("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    setColor("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    setColor("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    setColor("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    setColor("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    setColor("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     setColor("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    setColor("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     setColor("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

        glBegin(GL_POLYGON); //Container-1
    glColor3ub(213, 39, 39 );
    glVertex2f(13.00,3.25);
    glVertex2f(13.00,7.75);
    glVertex2f(21.25,7.75);
    glVertex2f(21.25,3.25);
    glVertex2f(13.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25,3.25);
    glVertex2f(21.25,7.75);
    glVertex2f(25.00,7.75);
    glVertex2f(25.00,3.25);
    glVertex2f(21.25,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00,3.25);
    glVertex2f(25.00,7.75);
    glVertex2f(30.00,7.75);
    glVertex2f(30.00,3.25);
    glVertex2f(25.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00,3.25);
    glVertex2f(30.00,7.75);
    glVertex2f(33.25,7.75);
    glVertex2f(33.25,3.25);
    glVertex2f(30.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00,7.75);
    glVertex2f(14.00,11.50);
    glVertex2f(18.00,11.50);
    glVertex2f(18.00,7.75);
    glVertex2f(14.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00,7.75);
    glVertex2f(18.00,11.50);
    glVertex2f(25.50,11.50);
    glVertex2f(25.50,7.75);
    glVertex2f(18.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50,7.75);
    glVertex2f(25.50,11.50);
    glVertex2f(29.75,11.50);
    glVertex2f(29.75,7.75);
    glVertex2f(25.50,7.75);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void rocks()
{
    //LEFT SIDE
    glPushMatrix();
    glScalef(32,18,0);
     glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.956f, -0.896f);
            glVertex2f(-0.967f, -0.915f);
            glVertex2f(-0.974f, -0.915f);
            glVertex2f(-0.976f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.987f, -0.904f);
            glVertex2f(-0.987f, -0.896f);
            glVertex2f(-0.987f, -0.884f);
            glVertex2f(-0.987f, -0.876f);
            glVertex2f(-0.987f, -0.872f);
            glVertex2f(-0.987f, -0.86f);
            glVertex2f(-0.983f, -0.86f);
            glVertex2f(-0.983f, -0.856f);
            glVertex2f(-0.980f, -0.852f);
            glVertex2f(-0.978f, -0.844f);
            glVertex2f(-0.974f, -0.836f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.967f, -0.825f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.949f, -0.817f);
            glVertex2f(-0.947f, -0.817f);
            glVertex2f(-0.943f, -0.817f);
            glVertex2f(-0.940f, -0.817f);
            glVertex2f(-0.936f, -0.821f);
            glVertex2f(-0.932f, -0.821f);
            glVertex2f(-0.927f, -0.821f);
            glVertex2f(-0.923f, -0.825f);
            glVertex2f(-0.923f, -0.828f);
            glVertex2f(-0.920f, -0.836f);
            glVertex2f(-0.920f, -0.856f);
            glVertex2f(-0.920f, -0.868f);
            glVertex2f(-0.920f, -0.872f);
            glVertex2f(-0.925f, -0.88f);
            glVertex2f(-0.936f, -0.888f);
            glVertex2f(-0.943f, -0.888f);
            glVertex2f(-0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.827f, -0.821f);
            glVertex2f(-0.816f, -0.821f);
            glVertex2f(-0.805f, -0.825f);
            glVertex2f(-0.794f, -0.828f);
            glVertex2f(-0.778f, -0.828f);
            glVertex2f(-0.769f, -0.813f);
            glVertex2f(-0.758f, -0.781f);
            glVertex2f(-0.763f, -0.773f);
            glVertex2f(-0.772f, -0.765f);
            glVertex2f(-0.778f, -0.749f);
            glVertex2f(-0.780f, -0.734f);
            glVertex2f(-0.780f, -0.722f);
            glVertex2f(-0.787f, -0.71f);
            glVertex2f(-0.792f, -0.698f);
            glVertex2f(-0.800f, -0.69f);
            glVertex2f(-0.807f, -0.694f);
            glVertex2f(-0.814f, -0.698f);
            glVertex2f(-0.836f, -0.702f);
            glVertex2f(-0.847f, -0.702f);
            glVertex2f(-0.856f, -0.718f);
            glVertex2f(-0.856f, -0.742f);
            glVertex2f(-0.854f, -0.757f);
            glVertex2f(-0.858f, -0.769f);
            glVertex2f(-0.863f, -0.785f);
            glVertex2f(-0.863f, -0.797f);
            glVertex2f(-0.860f, -0.809f);
            glVertex2f(-0.860f, -0.813f);
            glVertex2f(-0.863f, -0.825f);
            glVertex2f(-0.863f, -0.832f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.858f, -0.817f);
            glVertex2f(-0.854f, -0.813f);
            glVertex2f(-0.847f, -0.817f);
            glVertex2f(-0.845f, -0.817f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.843f, -0.821f);
            glVertex2f(-0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.812f, -0.892f);
            glVertex2f(-0.785f, -0.888f);
            glVertex2f(-0.812f, -0.935f);
            glVertex2f(-0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.900f, -0.919f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.909f, -0.939f);
            glVertex2f(-0.914f, -0.939f);
            glVertex2f(-0.916f, -0.927f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.912f, -0.9f);
            glVertex2f(-0.907f, -0.892f);
            glVertex2f(-0.900f, -0.892f);
            glVertex2f(-0.889f, -0.892f);
            glVertex2f(-0.880f, -0.892f);
            glVertex2f(-0.878f, -0.9f);
            glVertex2f(-0.880f, -0.911f);
            glVertex2f(-0.883f, -0.915f);
            glVertex2f(-0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.836f, -0.919f);
            glVertex2f(-0.836f, -0.923f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.834f, -0.931f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.867f, -0.923f);
            glVertex2f(-0.867f, -0.915f);
            glVertex2f(-0.865f, -0.908f);
            glVertex2f(-0.865f, -0.904f);
            glVertex2f(-0.863f, -0.904f);
            glVertex2f(-0.856f, -0.904f);
            glVertex2f(-0.849f, -0.892f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.838f, -0.908f);
            glVertex2f(-0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.949f, -0.777f);
            glVertex2f(-0.952f, -0.777f);
            glVertex2f(-0.954f, -0.777f);
            glVertex2f(-0.956f, -0.777f);
            glVertex2f(-0.956f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.954f, -0.757f);
            glVertex2f(-0.949f, -0.738f);
            glVertex2f(-0.943f, -0.738f);
            glVertex2f(-0.940f, -0.738f);
            glVertex2f(-0.936f, -0.745f);
            glVertex2f(-0.927f, -0.745f);
            glVertex2f(-0.927f, -0.757f);
            glVertex2f(-0.927f, -0.761f);
            glVertex2f(-0.927f, -0.769f);
            glVertex2f(-0.932f, -0.785f);
            glVertex2f(-0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.689f, -0.785f);
            glVertex2f(-0.665f, -0.781f);
            glVertex2f(-0.654f, -0.781f);
            glVertex2f(-0.634f, -0.817f);
            glVertex2f(-0.634f, -0.9f);
            glVertex2f(-0.647f, -0.927f);
            glVertex2f(-0.703f, -0.884f);
            glVertex2f(-0.705f, -0.888f);
            glVertex2f(-0.714f, -0.86f);
            glVertex2f(-0.714f, -0.809f);
            glVertex2f(-0.712f, -0.789f);
            glVertex2f(-0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.720f, -0.67f);
            glVertex2f(-0.714f, -0.655f);
            glVertex2f(-0.709f, -0.655f);
            glVertex2f(-0.692f, -0.627f);
            glVertex2f(-0.672f, -0.686f);
            glVertex2f(-0.712f, -0.765f);
            glVertex2f(-0.720f, -0.71f);
            glVertex2f(-0.723f, -0.722f);
            glVertex2f(-0.723f, -0.714f);
            glVertex2f(-0.725f, -0.694f);
            glVertex2f(-0.729f, -0.67f);
            glVertex2f(-0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.705f, -0.915f);
            glVertex2f(-0.700f, -0.923f);
            glVertex2f(-0.694f, -0.927f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.689f, -0.939f);
            glVertex2f(-0.687f, -0.943f);
            glVertex2f(-0.749f, -0.939f);
            glVertex2f(-0.743f, -0.915f);
            glVertex2f(-0.738f, -0.915f);
            glVertex2f(-0.725f, -0.896f);
            glVertex2f(-0.718f, -0.896f);
            glVertex2f(-0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.540f, -0.745f);
            glVertex2f(-0.527f, -0.749f);
            glVertex2f(-0.516f, -0.753f);
            glVertex2f(-0.500f, -0.765f);
            glVertex2f(-0.494f, -0.805f);
            glVertex2f(-0.514f, -0.828f);
            glVertex2f(-0.540f, -0.852f);
            glVertex2f(-0.572f, -0.856f);
            glVertex2f(-0.569f, -0.852f);
            glVertex2f(-0.576f, -0.828f);
            glVertex2f(-0.578f, -0.789f);
            glVertex2f(-0.576f, -0.769f);
            glVertex2f(-0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.463f, -0.69f);
            glVertex2f(-0.507f, -0.706f);
            glVertex2f(-0.512f, -0.69f);
            glVertex2f(-0.512f, -0.682f);
            glVertex2f(-0.507f, -0.69f);
            glVertex2f(-0.520f, -0.662f);
            glVertex2f(-0.518f, -0.631f);
            glVertex2f(-0.516f, -0.603f);
            glVertex2f(-0.505f, -0.583f);
            glVertex2f(-0.492f, -0.575f);
            glVertex2f(-0.467f, -0.568f);
            glVertex2f(-0.456f, -0.572f);
            glVertex2f(-0.443f, -0.579f);
            glVertex2f(-0.429f, -0.583f);
            glVertex2f(-0.420f, -0.595f);
            glVertex2f(-0.414f, -0.603f);
            glVertex2f(-0.414f, -0.615f);
            glVertex2f(-0.414f, -0.643f);
            glVertex2f(-0.416f, -0.658f);
            glVertex2f(-0.427f, -0.67f);
            glVertex2f(-0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.407f, -0.896f);
            glVertex2f(-0.418f, -0.896f);
            glVertex2f(-0.420f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.427f, -0.844f);
            glVertex2f(-0.425f, -0.825f);
            glVertex2f(-0.416f, -0.809f);
            glVertex2f(-0.409f, -0.809f);
            glVertex2f(-0.405f, -0.809f);
            glVertex2f(-0.374f, -0.817f);
            glVertex2f(-0.374f, -0.84f);
            glVertex2f(-0.374f, -0.876f);
            glVertex2f(-0.383f, -0.896f);
            glVertex2f(-0.392f, -0.896f);
            glVertex2f(-0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.600f, -0.71f);
            glVertex2f(-0.612f, -0.694f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.694f);
            glVertex2f(-0.609f, -0.662f);
            glVertex2f(-0.609f, -0.647f);
            glVertex2f(-0.596f, -0.647f);
            glVertex2f(-0.587f, -0.647f);
            glVertex2f(-0.572f, -0.655f);
            glVertex2f(-0.558f, -0.67f);
            glVertex2f(-0.558f, -0.694f);
            glVertex2f(-0.576f, -0.706f);
            glVertex2f(-0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.256f, -0.868f);
            glVertex2f(-0.278f, -0.876f);
            glVertex2f(-0.283f, -0.876f);
            glVertex2f(-0.285f, -0.872f);
            glVertex2f(-0.294f, -0.872f);
            glVertex2f(-0.292f, -0.872f);
            glVertex2f(-0.294f, -0.856f);
            glVertex2f(-0.300f, -0.797f);
            glVertex2f(-0.298f, -0.765f);
            glVertex2f(-0.287f, -0.753f);
            glVertex2f(-0.263f, -0.742f);
            glVertex2f(-0.236f, -0.738f);
            glVertex2f(-0.220f, -0.738f);
            glVertex2f(-0.200f, -0.757f);
            glVertex2f(-0.192f, -0.781f);
            glVertex2f(-0.192f, -0.801f);
            glVertex2f(-0.194f, -0.828f);
            glVertex2f(-0.198f, -0.844f);
            glVertex2f(-0.212f, -0.86f);
            glVertex2f(-0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.380f, -0.706f);
            glVertex2f(-0.380f, -0.674f);
            glVertex2f(-0.374f, -0.655f);
            glVertex2f(-0.365f, -0.651f);
            glVertex2f(-0.356f, -0.651f);
            glVertex2f(-0.338f, -0.639f);
            glVertex2f(-0.309f, -0.623f);
            glVertex2f(-0.309f, -0.635f);
            glVertex2f(-0.309f, -0.682f);
            glVertex2f(-0.309f, -0.718f);
            glVertex2f(-0.309f, -0.73f);
            glVertex2f(-0.312f, -0.761f);
            glVertex2f(-0.325f, -0.777f);
            glVertex2f(-0.338f, -0.777f);
            glVertex2f(-0.363f, -0.777f);
            glVertex2f(-0.372f, -0.777f);
            glVertex2f(-0.378f, -0.769f);
            glVertex2f(-0.378f, -0.749f);
            glVertex2f(-0.380f, -0.753f);
            glVertex2f(-0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.472f, -0.908f);
            glVertex2f(-0.467f, -0.915f);
            glVertex2f(-0.460f, -0.923f);
            glVertex2f(-0.460f, -0.935f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.527f, -0.892f);
            glVertex2f(-0.516f, -0.884f);
            glVertex2f(-0.503f, -0.884f);
            glVertex2f(-0.485f, -0.884f);
            glVertex2f(-0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.136f, -0.718f);
            glVertex2f(-0.147f, -0.726f);
            glVertex2f(-0.149f, -0.726f);
            glVertex2f(-0.178f, -0.694f);
            glVertex2f(-0.192f, -0.658f);
            glVertex2f(-0.187f, -0.635f);
            glVertex2f(-0.176f, -0.623f);
            glVertex2f(-0.172f, -0.607f);
            glVertex2f(-0.165f, -0.591f);
            glVertex2f(-0.152f, -0.579f);
            glVertex2f(-0.129f, -0.575f);
            glVertex2f(-0.105f, -0.575f);
            glVertex2f(-0.094f, -0.575f);
            glVertex2f(-0.083f, -0.603f);
            glVertex2f(-0.080f, -0.639f);
            glVertex2f(-0.078f, -0.67f);
            glVertex2f(-0.078f, -0.686f);
            glVertex2f(-0.100f, -0.738f);
            glVertex2f(-0.114f, -0.738f);
            glVertex2f(-0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.103f, -0.868f);
            glVertex2f(-0.096f, -0.884f);
            glVertex2f(-0.087f, -0.904f);
            glVertex2f(-0.085f, -0.923f);
            glVertex2f(-0.085f, -0.939f);
            glVertex2f(-0.085f, -0.943f);
            glVertex2f(-0.085f, -0.947f);
            glVertex2f(-0.158f, -0.955f);
            glVertex2f(-0.165f, -0.927f);
            glVertex2f(-0.167f, -0.884f);
            glVertex2f(-0.167f, -0.856f);
            glVertex2f(-0.154f, -0.828f);
            glVertex2f(-0.138f, -0.828f);
            glVertex2f(-0.125f, -0.828f);
            glVertex2f(-0.120f, -0.828f);
            glVertex2f(-0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.247f, -0.682f);
            glVertex2f(-0.249f, -0.686f);
            glVertex2f(-0.254f, -0.674f);
            glVertex2f(-0.258f, -0.662f);
            glVertex2f(-0.258f, -0.639f);
            glVertex2f(-0.247f, -0.623f);
            glVertex2f(-0.240f, -0.619f);
            glVertex2f(-0.229f, -0.619f);
            glVertex2f(-0.216f, -0.635f);
            glVertex2f(-0.212f, -0.686f);
            glVertex2f(-0.218f, -0.706f);
            glVertex2f(-0.234f, -0.702f);
            glVertex2f(-0.240f, -0.694f);
            glEnd();
             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.318f, -0.919f);
            glVertex2f(-0.318f, -0.923f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.943f);
            glVertex2f(-0.318f, -0.947f);
            glVertex2f(-0.354f, -0.943f);
            glVertex2f(-0.354f, -0.923f);
            glVertex2f(-0.349f, -0.904f);
            glVertex2f(-0.338f, -0.888f);
            glVertex2f(-0.329f, -0.9f);
            glVertex2f(-0.325f, -0.9f);
            glVertex2f(-0.320f, -0.904f);
            glVertex2f(-0.318f, -0.908f);
            glVertex2f(-0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.449f, -0.789f);
            glVertex2f(-0.460f, -0.789f);
            glVertex2f(-0.460f, -0.765f);
            glVertex2f(-0.460f, -0.745f);
            glVertex2f(-0.447f, -0.722f);
            glVertex2f(-0.432f, -0.722f);
            glVertex2f(-0.425f, -0.73f);
            glVertex2f(-0.420f, -0.745f);
            glVertex2f(-0.420f, -0.765f);
            glVertex2f(-0.425f, -0.797f);
            glVertex2f(-0.436f, -0.801f);
            glVertex2f(-0.449f, -0.801f);
            glVertex2f(-0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.045f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.069f, -0.896f);
            glVertex2f(-0.069f, -0.88f);
            glVertex2f(-0.067f, -0.852f);
            glVertex2f(-0.058f, -0.825f);
            glVertex2f(-0.038f, -0.821f);
            glVertex2f(-0.027f, -0.832f);
            glVertex2f(-0.020f, -0.84f);
            glVertex2f(-0.018f, -0.856f);
            glVertex2f(-0.018f, -0.9f);
            glVertex2f(-0.020f, -0.908f);
            glVertex2f(-0.027f, -0.923f);
            glVertex2f(-0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.037f, -0.726f);
            glVertex2f(0.028f, -0.745f);
            glVertex2f(0.024f, -0.757f);
            glVertex2f(0.015f, -0.769f);
            glVertex2f(0.002f, -0.777f);
            glVertex2f(-0.016f, -0.789f);
            glVertex2f(-0.020f, -0.789f);
            glVertex2f(-0.023f, -0.785f);
            glVertex2f(-0.029f, -0.781f);
            glVertex2f(-0.040f, -0.769f);
            glVertex2f(-0.043f, -0.757f);
            glVertex2f(-0.043f, -0.738f);
            glVertex2f(-0.045f, -0.714f);
            glVertex2f(-0.060f, -0.682f);
            glVertex2f(-0.065f, -0.655f);
            glVertex2f(-0.058f, -0.623f);
            glVertex2f(-0.047f, -0.607f);
            glVertex2f(-0.036f, -0.595f);
            glVertex2f(-0.003f, -0.583f);
            glVertex2f(0.011f, -0.579f);
            glVertex2f(0.020f, -0.579f);
            glVertex2f(0.033f, -0.579f);
            glVertex2f(0.053f, -0.599f);
            glVertex2f(0.066f, -0.619f);
            glVertex2f(0.066f, -0.631f);
            glVertex2f(0.066f, -0.658f);
            glVertex2f(0.064f, -0.678f);
            glVertex2f(0.057f, -0.698f);
            glVertex2f(0.044f, -0.718f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.609f, -0.923f);
            glVertex2f(-0.614f, -0.923f);
            glVertex2f(-0.618f, -0.923f);
            glVertex2f(-0.620f, -0.923f);
            glVertex2f(-0.620f, -0.919f);
            glVertex2f(-0.620f, -0.904f);
            glVertex2f(-0.616f, -0.9f);
            glVertex2f(-0.600f, -0.9f);
            glVertex2f(-0.596f, -0.9f);
            glVertex2f(-0.596f, -0.908f);
            glVertex2f(-0.600f, -0.915f);
            glVertex2f(-0.605f, -0.919f);
            glEnd();



            //RIGHT PART

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.956f, -0.896f);
            glVertex2f(0.967f, -0.915f);
            glVertex2f(0.974f, -0.915f);
            glVertex2f(0.976f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.987f, -0.904f);
            glVertex2f(0.987f, -0.896f);
            glVertex2f(0.987f, -0.884f);
            glVertex2f(0.987f, -0.876f);
            glVertex2f(0.987f, -0.872f);
            glVertex2f(0.987f, -0.86f);
            glVertex2f(0.983f, -0.86f);
            glVertex2f(0.983f, -0.856f);
            glVertex2f(0.980f, -0.852f);
            glVertex2f(0.978f, -0.844f);
            glVertex2f(0.974f, -0.836f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.967f, -0.825f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.949f, -0.817f);
            glVertex2f(0.947f, -0.817f);
            glVertex2f(0.943f, -0.817f);
            glVertex2f(0.940f, -0.817f);
            glVertex2f(0.936f, -0.821f);
            glVertex2f(0.932f, -0.821f);
            glVertex2f(0.927f, -0.821f);
            glVertex2f(0.923f, -0.825f);
            glVertex2f(0.923f, -0.828f);
            glVertex2f(0.920f, -0.836f);
            glVertex2f(0.920f, -0.856f);
            glVertex2f(0.920f, -0.868f);
            glVertex2f(0.920f, -0.872f);
            glVertex2f(0.925f, -0.88f);
            glVertex2f(0.936f, -0.888f);
            glVertex2f(0.943f, -0.888f);
            glVertex2f(0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.827f, -0.821f);
            glVertex2f(0.816f, -0.821f);
            glVertex2f(0.805f, -0.825f);
            glVertex2f(0.794f, -0.828f);
            glVertex2f(0.778f, -0.828f);
            glVertex2f(0.769f, -0.813f);
            glVertex2f(0.758f, -0.781f);
            glVertex2f(0.763f, -0.773f);
            glVertex2f(0.772f, -0.765f);
            glVertex2f(0.778f, -0.749f);
            glVertex2f(0.780f, -0.734f);
            glVertex2f(0.780f, -0.722f);
            glVertex2f(0.787f, -0.71f);
            glVertex2f(0.792f, -0.698f);
            glVertex2f(0.800f, -0.69f);
            glVertex2f(0.807f, -0.694f);
            glVertex2f(0.814f, -0.698f);
            glVertex2f(0.836f, -0.702f);
            glVertex2f(0.847f, -0.702f);
            glVertex2f(0.856f, -0.718f);
            glVertex2f(0.856f, -0.742f);
            glVertex2f(0.854f, -0.757f);
            glVertex2f(0.858f, -0.769f);
            glVertex2f(0.863f, -0.785f);
            glVertex2f(0.863f, -0.797f);
            glVertex2f(0.860f, -0.809f);
            glVertex2f(0.860f, -0.813f);
            glVertex2f(0.863f, -0.825f);
            glVertex2f(0.863f, -0.832f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.858f, -0.817f);
            glVertex2f(0.854f, -0.813f);
            glVertex2f(0.847f, -0.817f);
            glVertex2f(0.845f, -0.817f);
            glVertex2f(.845f, -0.821f);
            glVertex2f(0.845f, -0.821f);
            glVertex2f(0.843f, -0.821f);
            glVertex2f(0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.812f, -0.892f);
            glVertex2f(0.785f, -0.888f);
            glVertex2f(0.812f, -0.935f);
            glVertex2f(0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.900f, -0.919f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.909f, -0.939f);
            glVertex2f(0.914f, -0.939f);
            glVertex2f(0.916f, -0.927f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.912f, -0.9f);
            glVertex2f(0.907f, -0.892f);
            glVertex2f(0.900f, -0.892f);
            glVertex2f(0.889f, -0.892f);
            glVertex2f(0.880f, -0.892f);
            glVertex2f(0.878f, -0.9f);
            glVertex2f(0.880f, -0.911f);
            glVertex2f(0.883f, -0.915f);
            glVertex2f(0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.836f, -0.919f);
            glVertex2f(0.836f, -0.923f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.834f, -0.931f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.867f, -0.923f);
            glVertex2f(.867f, -0.915f);
            glVertex2f(.865f, -0.908f);
            glVertex2f(0.865f, -0.904f);
            glVertex2f(0.863f, -0.904f);
            glVertex2f(0.856f, -0.904f);
            glVertex2f(0.849f, -0.892f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.838f, -0.908f);
            glVertex2f(0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.949f, -0.777f);
            glVertex2f(0.952f, -0.777f);
            glVertex2f(0.954f, -0.777f);
            glVertex2f(0.956f, -0.777f);
            glVertex2f(0.956f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.954f, -0.757f);
            glVertex2f(0.949f, -0.738f);
            glVertex2f(0.943f, -0.738f);
            glVertex2f(0.940f, -0.738f);
            glVertex2f(0.936f, -0.745f);
            glVertex2f(0.927f, -0.745f);
            glVertex2f(0.927f, -0.757f);
            glVertex2f(0.927f, -0.761f);
            glVertex2f(0.927f, -0.769f);
            glVertex2f(0.932f, -0.785f);
            glVertex2f(0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.689f, -0.785f);
            glVertex2f(0.665f, -0.781f);
            glVertex2f(0.654f, -0.781f);
            glVertex2f(0.634f, -0.817f);
            glVertex2f(0.634f, -0.9f);
            glVertex2f(0.647f, -0.927f);
            glVertex2f(0.703f, -0.884f);
            glVertex2f(0.705f, -0.888f);
            glVertex2f(0.714f, -0.86f);
            glVertex2f(0.714f, -0.809f);
            glVertex2f(0.712f, -0.789f);
            glVertex2f(0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.720f, -0.67f);
            glVertex2f(0.714f, -0.655f);
            glVertex2f(0.709f, -0.655f);
            glVertex2f(0.692f, -0.627f);
            glVertex2f(0.672f, -0.686f);
            glVertex2f(0.712f, -0.765f);
            glVertex2f(0.720f, -0.71f);
            glVertex2f(0.723f, -0.722f);
            glVertex2f(0.723f, -0.714f);
            glVertex2f(0.725f, -0.694f);
            glVertex2f(0.729f, -0.67f);
            glVertex2f(0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.705f, -0.915f);
            glVertex2f(0.700f, -0.923f);
            glVertex2f(0.694f, -0.927f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.689f, -0.939f);
            glVertex2f(0.687f, -0.943f);
            glVertex2f(0.749f, -0.939f);
            glVertex2f(0.743f, -0.915f);
            glVertex2f(0.738f, -0.915f);
            glVertex2f(0.725f, -0.896f);
            glVertex2f(0.718f, -0.896f);
            glVertex2f(0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.540f, -0.745f);
            glVertex2f(0.527f, -0.749f);
            glVertex2f(0.516f, -0.753f);
            glVertex2f(0.500f, -0.765f);
            glVertex2f(0.494f, -0.805f);
            glVertex2f(0.514f, -0.828f);
            glVertex2f(0.540f, -0.852f);
            glVertex2f(0.572f, -0.856f);
            glVertex2f(0.569f, -0.852f);
            glVertex2f(0.576f, -0.828f);
            glVertex2f(0.578f, -0.789f);
            glVertex2f(0.576f, -0.769f);
            glVertex2f(0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.463f, -0.69f);
            glVertex2f(0.507f, -0.706f);
            glVertex2f(0.512f, -0.69f);
            glVertex2f(0.512f, -0.682f);
            glVertex2f(0.507f, -0.69f);
            glVertex2f(0.520f, -0.662f);
            glVertex2f(0.518f, -0.631f);
            glVertex2f(0.516f, -0.603f);
            glVertex2f(0.505f, -0.583f);
            glVertex2f(0.492f, -0.575f);
            glVertex2f(0.467f, -0.568f);
            glVertex2f(0.456f, -0.572f);
            glVertex2f(0.443f, -0.579f);
            glVertex2f(0.429f, -0.583f);
            glVertex2f(0.420f, -0.595f);
            glVertex2f(0.414f, -0.603f);
            glVertex2f(0.414f, -0.615f);
            glVertex2f(0.414f, -0.643f);
            glVertex2f(0.416f, -0.658f);
            glVertex2f(0.427f, -0.67f);
            glVertex2f(0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.407f, -0.896f);
            glVertex2f(0.418f, -0.896f);
            glVertex2f(0.420f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.427f, -0.844f);
            glVertex2f(0.425f, -0.825f);
            glVertex2f(0.416f, -0.809f);
            glVertex2f(0.409f, -0.809f);
            glVertex2f(0.405f, -0.809f);
            glVertex2f(0.374f, -0.817f);
            glVertex2f(0.374f, -0.84f);
            glVertex2f(0.374f, -0.876f);
            glVertex2f(0.383f, -0.896f);
            glVertex2f(0.392f, -0.896f);
            glVertex2f(0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.600f, -0.71f);
            glVertex2f(0.612f, -0.694f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.694f);
            glVertex2f(0.609f, -0.662f);
            glVertex2f(0.609f, -0.647f);
            glVertex2f(0.596f, -0.647f);
            glVertex2f(0.587f, -0.647f);
            glVertex2f(0.572f, -0.655f);
            glVertex2f(0.558f, -0.67f);
            glVertex2f(0.558f, -0.694f);
            glVertex2f(0.576f, -0.706f);
            glVertex2f(0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.256f, -0.868f);
            glVertex2f(0.278f, -0.876f);
            glVertex2f(0.283f, -0.876f);
            glVertex2f(0.285f, -0.872f);
            glVertex2f(0.294f, -0.872f);
            glVertex2f(0.292f, -0.872f);
            glVertex2f(0.294f, -0.856f);
            glVertex2f(0.300f, -0.797f);
            glVertex2f(0.298f, -0.765f);
            glVertex2f(0.287f, -0.753f);
            glVertex2f(0.263f, -0.742f);
            glVertex2f(0.236f, -0.738f);
            glVertex2f(0.220f, -0.738f);
            glVertex2f(0.200f, -0.757f);
            glVertex2f(0.192f, -0.781f);
            glVertex2f(0.192f, -0.801f);
            glVertex2f(0.194f, -0.828f);
            glVertex2f(0.198f, -0.844f);
            glVertex2f(0.212f, -0.86f);
            glVertex2f(0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.380f, -0.706f);
            glVertex2f(0.380f, -0.674f);
            glVertex2f(0.374f, -0.655f);
            glVertex2f(0.365f, -0.651f);
            glVertex2f(0.356f, -0.651f);
            glVertex2f(0.338f, -0.639f);
            glVertex2f(0.309f, -0.623f);
            glVertex2f(0.309f, -0.635f);
            glVertex2f(0.309f, -0.682f);
            glVertex2f(0.309f, -0.718f);
            glVertex2f(0.309f, -0.73f);
            glVertex2f(0.312f, -0.761f);
            glVertex2f(0.325f, -0.777f);
            glVertex2f(0.338f, -0.777f);
            glVertex2f(0.363f, -0.777f);
            glVertex2f(0.372f, -0.777f);
            glVertex2f(0.378f, -0.769f);
            glVertex2f(0.378f, -0.749f);
            glVertex2f(0.380f, -0.753f);
            glVertex2f(0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.472f, -0.908f);
            glVertex2f(0.467f, -0.915f);
            glVertex2f(0.460f, -0.923f);
            glVertex2f(0.460f, -0.935f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.527f, -0.892f);
            glVertex2f(0.516f, -0.884f);
            glVertex2f(0.503f, -0.884f);
            glVertex2f(0.485f, -0.884f);
            glVertex2f(0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.136f, -0.718f);
            glVertex2f(0.147f, -0.726f);
            glVertex2f(0.149f, -0.726f);
            glVertex2f(0.178f, -0.694f);
            glVertex2f(0.192f, -0.658f);
            glVertex2f(0.187f, -0.635f);
            glVertex2f(0.176f, -0.623f);
            glVertex2f(0.172f, -0.607f);
            glVertex2f(0.165f, -0.591f);
            glVertex2f(0.152f, -0.579f);
            glVertex2f(0.129f, -0.575f);
            glVertex2f(0.105f, -0.575f);
            glVertex2f(0.094f, -0.575f);
            glVertex2f(0.083f, -0.603f);
            glVertex2f(0.080f, -0.639f);
            glVertex2f(0.078f, -0.67f);
            glVertex2f(0.078f, -0.686f);
            glVertex2f(0.100f, -0.738f);
            glVertex2f(0.114f, -0.738f);
            glVertex2f(0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.103f, -0.868f);
            glVertex2f(0.096f, -0.884f);
            glVertex2f(0.087f, -0.904f);
            glVertex2f(0.085f, -0.923f);
            glVertex2f(0.085f, -0.939f);
            glVertex2f(0.085f, -0.943f);
            glVertex2f(0.085f, -0.947f);
            glVertex2f(0.158f, -0.955f);
            glVertex2f(0.165f, -0.927f);
            glVertex2f(0.167f, -0.884f);
            glVertex2f(0.167f, -0.856f);
            glVertex2f(0.154f, -0.828f);
            glVertex2f(0.138f, -0.828f);
            glVertex2f(0.125f, -0.828f);
            glVertex2f(0.120f, -0.828f);
            glVertex2f(0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.247f, -0.682f);
            glVertex2f(0.249f, -0.686f);
            glVertex2f(0.254f, -0.674f);
            glVertex2f(0.258f, -0.662f);
            glVertex2f(0.258f, -0.639f);
            glVertex2f(0.247f, -0.623f);
            glVertex2f(0.240f, -0.619f);
            glVertex2f(0.229f, -0.619f);
            glVertex2f(0.216f, -0.635f);
            glVertex2f(0.212f, -0.686f);
            glVertex2f(0.218f, -0.706f);
            glVertex2f(0.234f, -0.702f);
            glVertex2f(0.240f, -0.694f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.318f, -0.919f);
            glVertex2f(0.318f, -0.923f);
            glVertex2f(.318f, -0.935f);
            glVertex2f(0.318f, -0.935f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.943f);
            glVertex2f(0.318f, -0.947f);
            glVertex2f(0.354f, -0.943f);
            glVertex2f(0.354f, -0.923f);
            glVertex2f(0.349f, -0.904f);
            glVertex2f(0.338f, -0.888f);
            glVertex2f(0.329f, -0.9f);
            glVertex2f(0.325f, -0.9f);
            glVertex2f(0.320f, -0.904f);
            glVertex2f(0.318f, -0.908f);
            glVertex2f(0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.449f, -0.789f);
            glVertex2f(0.460f, -0.789f);
            glVertex2f(0.460f, -0.765f);
            glVertex2f(0.460f, -0.745f);
            glVertex2f(0.447f, -0.722f);
            glVertex2f(0.432f, -0.722f);
            glVertex2f(0.425f, -0.73f);
            glVertex2f(0.420f, -0.745f);
            glVertex2f(0.420f, -0.765f);
            glVertex2f(0.425f, -0.797f);
            glVertex2f(0.436f, -0.801f);
            glVertex2f(0.449f, -0.801f);
            glVertex2f(0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.045f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.069f, -0.896f);
            glVertex2f(0.069f, -0.88f);
            glVertex2f(0.067f, -0.852f);
            glVertex2f(0.058f, -0.825f);
            glVertex2f(0.038f, -0.821f);
            glVertex2f(0.027f, -0.832f);
            glVertex2f(0.020f, -0.84f);
            glVertex2f(0.018f, -0.856f);
            glVertex2f(0.018f, -0.9f);
            glVertex2f(0.020f, -0.908f);
            glVertex2f(0.027f, -0.923f);
            glVertex2f(0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.609f, -0.923f);
            glVertex2f(0.614f, -0.923f);
            glVertex2f(0.618f, -0.923f);
            glVertex2f(0.620f, -0.923f);
            glVertex2f(0.620f, -0.919f);
            glVertex2f(0.620f, -0.904f);
            glVertex2f(0.616f, -0.9f);
            glVertex2f(0.600f, -0.9f);
            glVertex2f(0.596f, -0.9f);
            glVertex2f(0.596f, -0.908f);
            glVertex2f(0.600f, -0.915f);
            glVertex2f(0.605f, -0.919f);
            glEnd();

            glPopMatrix();
}

void sky()
{

    glPushMatrix();
    glScalef(32,18,0);
    glTranslatef(0,0.1,0);

     glBegin(GL_TRIANGLE_FAN);
            setColor("sky");
            glVertex2f(-0.998f, 0.211f);
            glVertex2f(1.002f, 0.231f);
            glVertex2f(1.000f, 0.895f);
            glVertex2f(-1.000f, 0.899f);
            glVertex2f(-1.000f, 0.211f);
            glEnd();
            glPopMatrix();
}
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':
            /*if (move_gate_1 <.1)  // Check if within the upper limit
                move_gate_1 += 0.1f;  // Move the object upward along the y-axis*/
                up_1 =true;
            break;
        case 'A':
             /* if(move_gate_1>-2.25)// Check if within the lower limit
                move_gate_1 -= 0.1f;  // Move the object downward along the y-axis*/
                down_1=true;
            break;


        case 'b':
           /* if(move_gate_2<.1)
                move_gate_2 +=.1;*/
                up_2=true;

            break;

        case 'B':
           /* if(move_gate_2>-3)
                move_gate_2 -=.1f;*/
                down_2=true;
            break;

        case 'c':
           /* if(move_gate_3<.1)
                move_gate_3 +=.1;*/
                up_3=true;
            break;

        case 'C':
            /*if(move_gate_3>-4.5)
                move_gate_3 -=.1;*/
                down_3=true;
            break;


        case 'd':
            /*if(move_gate_4<.1)
                move_gate_4 +=.1;*/
                up_4=true;

            break;

        case 'D':
            /*if(move_gate_4>-5.5)
                move_gate_4 -=.1;*/
                down_4=true;
            break;


        case 'e':
            /*if(move_gate_5<.0)
                move_gate_5 +=.1;*/
                up_5=true;
            break;

        case 'E':
            /*if(move_gate_5>-5.7)
                move_gate_5 -=.1;*/
                down_5=true;
            break;



        case 'f':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_6=true;
            break;

        case 'F':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_6=true;
            break;


        case 'g':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_7=true;
            break;

        case 'G':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_7=true;
            break;


        case 'h':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_8=true;
            break;

        case 'H':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_8=true;
            break;

        case 's':
            move_ship_x +=.1;
            break;

        case '1':
           /* if(move_water_1<2)
            {
                move_water_1 +=.1;
                move_ship_y +=.1;

                if(move_water_1>=2)
                {
                    canal_1= true;
                }


            }*/
            canal_1=true;

            break;


        case '2':
           /* if(move_water_2<2 && canal_1 )
            {
                move_water_2 +=.1;
                move_ship_y +=.1;

            }*/
            if(move_water_1>=2)
            canal_2=true;

            break;

        case '3':
            if(move_water_2>=2)
            canal_3=true;
            break;

        case '5':
            canal_5=true;
            break;

        case '6':
            if(move_water_5<=-2)
            canal_6=true;
            break;

        case '7':
            if(move_water_6<=-2)
            canal_7=true;
            break;



    }

    glutPostRedisplay();  // Trigger a redraw to update the display
}
void display2() {

	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
    
	sky();

	mountain_back();
    mountain_front();



	sidewater();
	ground();
	rocks();


	sewage_canal_1();
	sewage_canal_2();
	sewage_canal_3();
	sewage_canal_4();
	sewage_canal_5();
	sewage_canal_6();
	sewage_canal_7();


	ship1();



	FIRST_GATE();
	SECOND_GATE();
	THIRD_GATE();
	fourth_gate();
	fifth_gate();
	sixth_gate();
	seventh_gate();
	eight_gate();



	//drain();

    glFlush();  // Render now
    glutSwapBuffers();
}

//---------------------------------------------- URBAN PART -----------------------------------

void currentWater(float Tx,float Ty)
{
    glPushMatrix();
    glTranslatef(Tx,Ty,0);
    glBegin(GL_LINES);
    glColor3ub(225,225,225);
    glVertex2f(3.0f,-5.0f);
    glVertex2f(5.0f,-5.0f);
    glEnd();
    glPopMatrix();
}
void star()
{
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-40, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-25, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-30, 10,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-35, 15,0);
    glEnd();
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-20, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-15, 20,0);
    glEnd();
        glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(40, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(25, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(30, 10,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(35, 15,0);
    glEnd();
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(20, 25,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(15, 20,0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(0, 20,0);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-5, 25,0);
    glEnd();
}
void buildingwindow(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(-5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 5.0f, 0.0f);
    glVertex3f(-5.0f, 5.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void buildingwindowtwo(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(1.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 4.0f, 0.0f);
    glVertex3f(1.0f, 4.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void twintowerwindow(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 2.0f, 0.0f);
    glVertex3f(1.0f, 2.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void bridgeBrike(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    setColor("brick");
    glVertex3f(1.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.75f, 0.0f);
    glVertex3f(1.0f, 0.75f, 0.0f);
    glEnd();
    glPopMatrix();
}
void bridgenut(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    setColor("brick");
    glVertex3f(1.0f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.50f, 0.0f);
    glVertex3f(1.0f, 0.50f, 0.0f);
    glEnd();
    glPopMatrix();
}
void drawBuilding()
{
    glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(40.0f, 3.0f);
	glVertex2f(40.0f, 11.0f);
	glVertex2f(36.0f, 11.0f);
	glVertex2f(36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,127,50);
    buildingwindow(0.3,0.2,127,45);
    buildingwindow(0.3,0.2,127,40);
    buildingwindow(0.3,0.2,127,35);
    buildingwindow(0.3,0.2,127,30);
    buildingwindow(0.3,0.2,127,25);
    buildingwindow(0.3,0.2,127,20);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor");
    //glColor3ub(234, 144, 75); // Yellow
	glVertex2f(34.0f, 3.0f);
	glVertex2f(34.0f, 14.0f);
	glVertex2f(29.0f, 14.0f);
	glVertex2f(29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,60,10);
    buildingwindowtwo(0.5,0.5,62,10);
    buildingwindowtwo(0.5,0.5,60,14);
    buildingwindowtwo(0.5,0.5,62,14);
    buildingwindowtwo(0.5,0.5,60,18);
    buildingwindowtwo(0.5,0.5,62,18);
	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(36.0f, 3.0f);
	glVertex2f(36.0f, 8.0f);
	glVertex2f(32.0f, 8.0f);
	glVertex2f(32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,114,35);
    buildingwindow(0.3,0.2,114,30);
    buildingwindow(0.3,0.2,114,25);
    buildingwindow(0.3,0.2,114,20);
    buildingwindow(0.3,0.2,114,15);
// Render now
//upore sob right side ar building
	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(28.0f, 3.0f);
	glVertex2f(28.0f, 11.0f);
	glVertex2f(23.0f, 11.0f);
	glVertex2f(23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,83,45);
    buildingwindow(0.3,0.2,83,40);
    buildingwindow(0.3,0.2,83,35);
    buildingwindow(0.3,0.2,83,30);
    buildingwindow(0.3,0.2,83,25);
    buildingwindow(0.3,0.2,83,20);
    buildingwindow(0.3,0.2,83,15);
	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(30.0f, 3.0f);
	glVertex2f(30.0f, 9.0f);
	glVertex2f(26.0f, 9.0f);
	glVertex2f(26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,93,35);
    buildingwindow(0.3,0.2,93,30);
    buildingwindow(0.3,0.2,93,25);
    buildingwindow(0.3,0.2,93,20);
    buildingwindow(0.3,0.2,93,15);
//right 2nd
    glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(23.0f, 3.0f);
	glVertex2f(23.0f, 10.0f);
	glVertex2f(18.0f, 10.0f);
	glVertex2f(18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,39,10);
    buildingwindowtwo(0.5,0.5,41,14);
    buildingwindowtwo(0.5,0.5,41,6);
	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(19.0f, 3.0f);
	glVertex2f(19.0f, 9.0f);
	glVertex2f(14.0f, 9.0f);
	glVertex2f(14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,55,35);
    buildingwindow(0.3,0.2,55,30);
    buildingwindow(0.3,0.2,55,25);
    buildingwindow(0.3,0.2,55,20);
    buildingwindow(0.3,0.2,55,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(14.0f, 3.0f);
	glVertex2f(14.0f, 12.0f);
	glVertex2f(9.0f, 12.0f);
	glVertex2f(9.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,39,45);
    buildingwindow(0.3,0.2,39,40);
    buildingwindow(0.3,0.2,39,35);
    buildingwindow(0.3,0.2,39,30);
    buildingwindow(0.3,0.2,39,25);
    buildingwindow(0.3,0.2,39,20);
    buildingwindow(0.3,0.2,39,15);
    glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(10.0f, 3.0f);
	glVertex2f(10.0f, 11.0f);
	glVertex2f(5.0f, 11.0f);
	glVertex2f(5.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,15,10);
    buildingwindowtwo(0.5,0.5,15,14);
    buildingwindowtwo(0.5,0.5,15,6);
    buildingwindowtwo(0.5,0.5,13,10);
    buildingwindowtwo(0.5,0.5,13,14);
    buildingwindowtwo(0.5,0.5,13,6);
    buildingwindowtwo(0.5,0.5,11,10);
    buildingwindowtwo(0.5,0.5,11,14);
    buildingwindowtwo(0.5,0.5,11,6);


// NEW BUILDINGS

glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-40.0f, 3.0f);
	glVertex2f(-40.0f, 11.0f);
	glVertex2f(-36.0f, 11.0f);
	glVertex2f(-36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-127,50);
    buildingwindow(0.3,0.2,-127,45);
    buildingwindow(0.3,0.2,-127,40);
    buildingwindow(0.3,0.2,-127,35);
    buildingwindow(0.3,0.2,-127,30);
    buildingwindow(0.3,0.2,-127,25);
    buildingwindow(0.3,0.2,-127,20);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-34.0f, 3.0f);
	glVertex2f(-34.0f, 13.0f);
	glVertex2f(-29.0f, 13.0f);
	glVertex2f(-29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-65,10);
    buildingwindowtwo(0.5,0.5,-62,10);
    buildingwindowtwo(0.5,0.5,-65,14);
    buildingwindowtwo(0.5,0.5,-62,14);
    buildingwindowtwo(0.5,0.5,-65,18);
    buildingwindowtwo(0.5,0.5,-62,18);
   
//left bildig 1st
    glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-36.0f, 3.0f);
	glVertex2f(-36.0f, 8.0f);
	glVertex2f(-32.0f, 8.0f);
	glVertex2f(-32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-114,35);
    buildingwindow(0.3,0.2,-114,30);
    buildingwindow(0.3,0.2,-114,25);
    buildingwindow(0.3,0.2,-114,20);
    buildingwindow(0.3,0.2,-114,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-28.0f, 3.0f);
	glVertex2f(-28.0f, 11.0f);
	glVertex2f(-23.0f, 11.0f);
	glVertex2f(-23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-83,45);
    buildingwindow(0.3,0.2,-83,40);
    buildingwindow(0.3,0.2,-83,35);
    buildingwindow(0.3,0.2,-83,30);
    buildingwindow(0.3,0.2,-83,25);
    buildingwindow(0.3,0.2,-83,20);
    buildingwindow(0.3,0.2,-83,15);


	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor");// Yellow
	glVertex2f(-30.0f, 3.0f);
	glVertex2f(-30.0f, 9.0f);
	glVertex2f(-26.0f, 9.0f);
	glVertex2f(-26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-93,35);
    buildingwindow(0.3,0.2,-93,30);
    buildingwindow(0.3,0.2,-93,25);
    buildingwindow(0.3,0.2,-93,20);
    buildingwindow(0.3,0.2,-93,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-23.0f, 3.0f);
	glVertex2f(-23.0f, 10.0f);
	glVertex2f(-18.0f, 10.0f);
	glVertex2f(-18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-43,10);
    buildingwindowtwo(0.5,0.5,-41,14);
    buildingwindowtwo(0.5,0.5,-41,6);

	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor"); // Yellow
	glVertex2f(-19.0f, 3.0f);
	glVertex2f(-19.0f, 9.0f);
	glVertex2f(-14.0f, 9.0f);
	glVertex2f(-14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-55,35);
    buildingwindow(0.3,0.2,-55,30);
    buildingwindow(0.3,0.2,-55,25);
    buildingwindow(0.3,0.2,-55,20);
    buildingwindow(0.3,0.2,-55,15);


	glBegin(GL_POLYGON);            // Buildings
	setColor("bulidingcolor");// Yellow
	glVertex2f(-14.0f, 3.0f);
	glVertex2f(-14.0f, 12.0f);
	glVertex2f(-9.0f, 12.0f);
	glVertex2f(-9.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-25,10);
    buildingwindowtwo(0.5,0.5,-25,14);
    buildingwindowtwo(0.5,0.5,-25,6);
    buildingwindowtwo(0.5,0.5,-23,10);
    buildingwindowtwo(0.5,0.5,-23,14);
    buildingwindowtwo(0.5,0.5,-23,6);
    buildingwindowtwo(0.5,0.5,-21,10);
    buildingwindowtwo(0.5,0.5,-21,14);
    buildingwindowtwo(0.5,0.5,-21,6);	
}
void drawBuildingL()
{
     glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(40.0f, 3.0f);
	glVertex2f(40.0f, 11.0f);
	glVertex2f(36.0f, 11.0f);
	glVertex2f(36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,127,50);
    buildingwindow(0.3,0.2,127,45);
    buildingwindow(0.3,0.2,127,40);
    buildingwindow(0.3,0.2,127,35);
    buildingwindow(0.3,0.2,127,30);
    buildingwindow(0.3,0.2,127,25);
    buildingwindow(0.3,0.2,127,20);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(34.0f, 3.0f);
	glVertex2f(34.0f, 14.0f);
	glVertex2f(29.0f, 14.0f);
	glVertex2f(29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,60,10);
    buildingwindowtwo(0.5,0.5,62,10);
    buildingwindowtwo(0.5,0.5,60,14);
    buildingwindowtwo(0.5,0.5,62,14);
    buildingwindowtwo(0.5,0.5,60,18);
    buildingwindowtwo(0.5,0.5,62,18);
	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(36.0f, 3.0f);
	glVertex2f(36.0f, 8.0f);
	glVertex2f(32.0f, 8.0f);
	glVertex2f(32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,114,35);
    buildingwindow(0.3,0.2,114,30);
    buildingwindow(0.3,0.2,114,25);
    buildingwindow(0.3,0.2,114,20);
    buildingwindow(0.3,0.2,114,15);
// Render now
//upore sob right side ar building
	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(28.0f, 3.0f);
	glVertex2f(28.0f, 11.0f);
	glVertex2f(23.0f, 11.0f);
	glVertex2f(23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,83,45);
    buildingwindow(0.3,0.2,83,40);
    buildingwindow(0.3,0.2,83,35);
    buildingwindow(0.3,0.2,83,30);
    buildingwindow(0.3,0.2,83,25);
    buildingwindow(0.3,0.2,83,20);
    buildingwindow(0.3,0.2,83,15);
	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(30.0f, 3.0f);
	glVertex2f(30.0f, 9.0f);
	glVertex2f(26.0f, 9.0f);
	glVertex2f(26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,93,35);
    buildingwindow(0.3,0.2,93,30);
    buildingwindow(0.3,0.2,93,25);
    buildingwindow(0.3,0.2,93,20);
    buildingwindow(0.3,0.2,93,15);
//right 2nd
    glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(23.0f, 3.0f);
	glVertex2f(23.0f, 10.0f);
	glVertex2f(18.0f, 10.0f);
	glVertex2f(18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,39,10);
    buildingwindowtwo(0.5,0.5,41,14);
    buildingwindowtwo(0.5,0.5,41,6);
	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(19.0f, 3.0f);
	glVertex2f(19.0f, 9.0f);
	glVertex2f(14.0f, 9.0f);
	glVertex2f(14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,55,35);
    buildingwindow(0.3,0.2,55,30);
    buildingwindow(0.3,0.2,55,25);
    buildingwindow(0.3,0.2,55,20);
    buildingwindow(0.3,0.2,55,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(14.0f, 3.0f);
	glVertex2f(14.0f, 12.0f);
	glVertex2f(9.0f, 12.0f);
	glVertex2f(9.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,39,45);
    buildingwindow(0.3,0.2,39,40);
    buildingwindow(0.3,0.2,39,35);
    buildingwindow(0.3,0.2,39,30);
    buildingwindow(0.3,0.2,39,25);
    buildingwindow(0.3,0.2,39,20);
    buildingwindow(0.3,0.2,39,15);
    glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(10.0f, 3.0f);
	glVertex2f(10.0f, 11.0f);
	glVertex2f(5.0f, 11.0f);
	glVertex2f(5.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,15,10);
    buildingwindowtwo(0.5,0.5,15,14);
    buildingwindowtwo(0.5,0.5,15,6);
    buildingwindowtwo(0.5,0.5,13,10);
    buildingwindowtwo(0.5,0.5,13,14);
    buildingwindowtwo(0.5,0.5,13,6);
    buildingwindowtwo(0.5,0.5,11,10);
    buildingwindowtwo(0.5,0.5,11,14);
    buildingwindowtwo(0.5,0.5,11,6);


// NEW BUILDINGS

glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-40.0f, 3.0f);
	glVertex2f(-40.0f, 11.0f);
	glVertex2f(-36.0f, 11.0f);
	glVertex2f(-36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-127,50);
    buildingwindow(0.3,0.2,-127,45);
    buildingwindow(0.3,0.2,-127,40);
    buildingwindow(0.3,0.2,-127,35);
    buildingwindow(0.3,0.2,-127,30);
    buildingwindow(0.3,0.2,-127,25);
    buildingwindow(0.3,0.2,-127,20);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-34.0f, 3.0f);
	glVertex2f(-34.0f, 13.0f);
	glVertex2f(-29.0f, 13.0f);
	glVertex2f(-29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-65,10);
    buildingwindowtwo(0.5,0.5,-62,10);
    buildingwindowtwo(0.5,0.5,-65,14);
    buildingwindowtwo(0.5,0.5,-62,14);
    buildingwindowtwo(0.5,0.5,-65,18);
    buildingwindowtwo(0.5,0.5,-62,18);
   
//left bildig 1st
    glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-36.0f, 3.0f);
	glVertex2f(-36.0f, 8.0f);
	glVertex2f(-32.0f, 8.0f);
	glVertex2f(-32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-114,35);
    buildingwindow(0.3,0.2,-114,30);
    buildingwindow(0.3,0.2,-114,25);
    buildingwindow(0.3,0.2,-114,20);
    buildingwindow(0.3,0.2,-114,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow");// Yellow
	glVertex2f(-28.0f, 3.0f);
	glVertex2f(-28.0f, 11.0f);
	glVertex2f(-23.0f, 11.0f);
	glVertex2f(-23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-83,45);
    buildingwindow(0.3,0.2,-83,40);
    buildingwindow(0.3,0.2,-83,35);
    buildingwindow(0.3,0.2,-83,30);
    buildingwindow(0.3,0.2,-83,25);
    buildingwindow(0.3,0.2,-83,20);
    buildingwindow(0.3,0.2,-83,15);


	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-30.0f, 3.0f);
	glVertex2f(-30.0f, 9.0f);
	glVertex2f(-26.0f, 9.0f);
	glVertex2f(-26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-93,35);
    buildingwindow(0.3,0.2,-93,30);
    buildingwindow(0.3,0.2,-93,25);
    buildingwindow(0.3,0.2,-93,20);
    buildingwindow(0.3,0.2,-93,15);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-23.0f, 3.0f);
	glVertex2f(-23.0f, 10.0f);
	glVertex2f(-18.0f, 10.0f);
	glVertex2f(-18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-43,10);
    buildingwindowtwo(0.5,0.5,-41,14);
    buildingwindowtwo(0.5,0.5,-41,6);

	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-19.0f, 3.0f);
	glVertex2f(-19.0f, 9.0f);
	glVertex2f(-14.0f, 9.0f);
	glVertex2f(-14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-55,35);
    buildingwindow(0.3,0.2,-55,30);
    buildingwindow(0.3,0.2,-55,25);
    buildingwindow(0.3,0.2,-55,20);
    buildingwindow(0.3,0.2,-55,15);


	glBegin(GL_POLYGON);            // Buildings
	setColor("buildingShadow"); // Yellow
	glVertex2f(-14.0f, 3.0f);
	glVertex2f(-14.0f, 12.0f);
	glVertex2f(-9.0f, 12.0f);
	glVertex2f(-9.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-25,10);
    buildingwindowtwo(0.5,0.5,-25,14);
    buildingwindowtwo(0.5,0.5,-25,6);
    buildingwindowtwo(0.5,0.5,-23,10);
    buildingwindowtwo(0.5,0.5,-23,14);
    buildingwindowtwo(0.5,0.5,-23,6);
    buildingwindowtwo(0.5,0.5,-21,10);
    buildingwindowtwo(0.5,0.5,-21,14);
    buildingwindowtwo(0.5,0.5,-21,6);
}
void drawWater()
{

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.3, 0.8);
	//glColor3ub(27, 214, 255);//uporer color
	glVertex2f(-41.0f, -8.0f);
	glVertex2f(41.0f, -8.0f);
	glVertex2f(41.0f, 3.0f);
	glVertex2f(-41.0f, 3.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.7, 1.0);//nicher color
	glVertex2f(-41.0f, -25.0f);
	glVertex2f(41.0f, -25.0f);
    glColor3f(0.0, 0.3, 0.8);//uporer color
	glVertex2f(41.0f, -8.0f);
	glVertex2f(-41.0f, -8.0f);
	glEnd();
    currentWater(-15,-6);
    currentWater(-10,-4);
    currentWater(-5,-5);
    currentWater(5,-4);
    currentWater(10,-5);
    currentWater(30,0);
    currentWater(20,-4);
    currentWater(25,-5);
    currentWater(10,-2);

    currentWater(30,-8);
    currentWater(20,-10);
    currentWater(25,-15);
    currentWater(10,-19);

    currentWater(-30,-8);
    currentWater(-20,-10);
    currentWater(-25,-15);
    currentWater(-10,-19);

    currentWater(-30,0);
    currentWater(-20,-4);
    currentWater(-25,-5);
    currentWater(-10,-2);

    currentWater(-38,0);
    currentWater(-23,-4);
    currentWater(-27,-5);
    currentWater(-12,-2);

    currentWater(-0,4);
    currentWater(-0,-10);
    currentWater(-2,-15);

}
void skybackground()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 10, 54);
    glVertex2f(-41.0,0.0);
    glVertex2f(41.0,0.0);
    glColor3ub(1, 56, 112);
    glVertex2f(41.0,30);
    glVertex2f(-41.0,30.0);
    glEnd();
}
void palestineFlag()
{
    glColor3ub (122, 194, 244);
    glBegin(GL_LINES);
    glVertex2f(3,4);
    glVertex2f(-3,4);
    glEnd();
    glColor3ub (122, 194, 244);
    glBegin(GL_LINES);
    glVertex2f(2,5);
    glVertex2f(-2,5);
    glEnd();
    glColor3ub (255, 250, 250);
    glBegin(GL_POLYGON);
    glVertex2f(-2,3);
    glVertex2f(-10,3);
    glVertex2f(-10,7);
    glVertex2f(-2,7);
    glEnd();
    glColor3ub (13, 158, 8);
    glBegin(GL_POLYGON);
    glVertex2f(-10,3);
    glVertex2f(-2,3);
    glVertex2f(-2,4);
    glVertex2f(-10,4);
    glEnd();
    glColor3ub (13, 12, 12);
    glBegin(GL_POLYGON);
    glVertex2f(-2,6);
    glVertex2f(-2,7);
    glVertex2f(-10,7);
    glVertex2f(-10,6);
    glEnd();
    glColor3ub (235, 64, 52);
    glBegin(GL_POLYGON);
    glVertex2f(-10,3);
    glVertex2f(-8,5);
    glVertex2f(-10,7);
    glEnd();
}
void airplan()
{
    glColor3ub (166, 212, 246);
    glBegin(GL_POLYGON);
    glVertex2f(1,6);
    glVertex2f(3,4);
    glVertex2f(15,4);
    glVertex2f(15,5);
    glVertex2f(13,6);
    glEnd();
    glColor3ub (73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(1,6);
    glVertex2f(3,6);
    glVertex2f(3,7);
    glVertex2f(1,9);
    glEnd();
    glColor3ub (73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(7,4);
    glVertex2f(10.25,-1);
    glVertex2f(11.75,-1);
    glVertex2f(11,4);
    glEnd();
    glColor3ub (73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(7,6);
    glVertex2f(10,6);
    glVertex2f(6,10);
    glVertex2f(5,10);
    glEnd();
    glColor3ub (122, 194, 244);
    glBegin(GL_POLYGON);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glVertex2f(15,5);
    glVertex2f(13,6);
    glEnd();
    palestineFlag();

}
float planPos=-30;
float planSpeed=0.05;
void tempairPlan()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(planPos,25,0);
    glScalef(0.2,0.2,0);
    airplan();
    glPopMatrix();
    
}
float bridgeshadowposx=0;
float bridgeshadowposy=0;
float bridgeshadowSpeed=0.5;
void BridgeBox()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,-5,0);
    glColor3ub (142, 44, 33);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6,0);
    glVertex2f(6,5);
    glVertex2f(4,5);
    glEnd();
    bridgeBrike(1,1,3,0);
    bridgeBrike(1,1,3,1.5);
    bridgeBrike(1,1,4,1);
    bridgeBrike(1,1,4,2);
    glBegin(GL_QUADS);
    glColor3ub (56,56,56);
    glVertex2f(4,0);
    glColor3f(0.0, 0.3, 0.8);
    glVertex2f(7,-4);
    glColor3f(0.0, 0.3, 0.8);
    glVertex2f(9,-4);
    glColor3ub (56,56,56);
    glVertex2f(6,0);
    glEnd();
    glColor3ub (66, 56, 54);
    glBegin(GL_QUADS);
    glVertex2f(3,5);
    glVertex2f(7,5);
    glVertex2f(7,6);
    glVertex2f(3,6);
    glEnd();
    glColor3ub (50, 40, 39);
    glBegin(GL_QUADS);
    glVertex2f(2,6);
    glVertex2f(8,6);
    glVertex2f(8,7);
    glVertex2f(2,7);
    glEnd();
	glPopMatrix();


}
void twintowerl()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-7,3,0);
	glBegin(GL_POLYGON);
	setColor("twintower"); // Yellow
	glVertex2f(-2.50, 0.0f);
	glVertex2f(2.50, 0.0f);
	glVertex2f(2.50f, 10.0f);
	glVertex2f(-2.50f, 10.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1,16);
    twintowerwindow(0.5,0.5,-4,16);
    twintowerwindow(0.5,0.5,1.75,16);
    twintowerwindow(0.5,0.5,-1,14);
    twintowerwindow(0.5,0.5,-4,14);
    twintowerwindow(0.5,0.5,1.75,14);
    twintowerwindow(0.5,0.5,-1,12);
    twintowerwindow(0.5,0.5,-4,12);
    twintowerwindow(0.5,0.5,1.75,12);
    twintowerwindow(0.5,0.5,-1,10);
    twintowerwindow(0.5,0.5,-4,10);
    twintowerwindow(0.5,0.5,1.75,10);
    twintowerwindow(0.5,0.5,1.75,8);
    twintowerwindow(0.5,0.5,-1,8);
    twintowerwindow(0.5,0.5,-4,8);
    twintowerwindow(0.5,0.5,1.75,6);
    twintowerwindow(0.5,0.5,-1,6);
    twintowerwindow(0.5,0.5,-4,6);
    twintowerwindow(0.5,0.5,1.75,4);
    twintowerwindow(0.5,0.5,-1,4);
    twintowerwindow(0.5,0.5,-4,4);
    twintowerwindow(0.5,0.5,1.75,2);
    twintowerwindow(0.5,0.5,-1,2);
    twintowerwindow(0.5,0.5,-4,2);
	glBegin(GL_POLYGON);
	setColor("twintower"); // Yellow
	glVertex2f(-2.00, 10.0f);
	glVertex2f(2.00, 10.0f);
	glVertex2f(2.00f, 16.0f);
	glVertex2f(-2.00f, 16.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,18);
    twintowerwindow(0.5,0.5,-4,18);
    twintowerwindow(0.5,0.5,1,18);
    twintowerwindow(0.5,0.5,-1.50,20);
    twintowerwindow(0.5,0.5,-4,20);
    twintowerwindow(0.5,0.5,1,20);
    twintowerwindow(0.5,0.5,-1.50,22);
    twintowerwindow(0.5,0.5,-4,22);
    twintowerwindow(0.5,0.5,1,22);
    twintowerwindow(0.5,0.5,-1.50,24);
    twintowerwindow(0.5,0.5,-4,24);
    twintowerwindow(0.5,0.5,1,24);
    twintowerwindow(0.5,0.5,-1.50,26);
    twintowerwindow(0.5,0.5,-4,26);
    twintowerwindow(0.5,0.5,1,26);
    twintowerwindow(0.5,0.5,-1.50,28);
    twintowerwindow(0.5,0.5,-4,28);
    twintowerwindow(0.5,0.5,1,28);
    twintowerwindow(0.5,0.5,-1.50,30);
    twintowerwindow(0.5,0.5,-4,30);
    twintowerwindow(0.5,0.5,1,30);

	glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
	glVertex2f(-1.50, 16.0f);
	glVertex2f(1.50, 16.0f);
	glVertex2f(1.50f, 23.0f);
	glVertex2f(-1.50f, 23.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,32);
    twintowerwindow(0.5,0.5,-4,32);
    twintowerwindow(0.5,0.5,-1.50,34);
    twintowerwindow(0.5,0.5,-4,34);
    twintowerwindow(0.5,0.5,-1.50,36);
    twintowerwindow(0.5,0.5,-4,36);
    twintowerwindow(0.5,0.5,-1.50,38);
    twintowerwindow(0.5,0.5,-4,38);
    twintowerwindow(0.5,0.5,-1.50,40);
    twintowerwindow(0.5,0.5,-4,40);
    twintowerwindow(0.5,0.5,-1.50,42);
    twintowerwindow(0.5,0.5,-4,42);
    twintowerwindow(0.5,0.5,-1.50,44);
    twintowerwindow(0.5,0.5,-4,44);
	glBegin(GL_POLYGON);
	setColor("twintower");// Yellow
	glVertex2f(-1.00, 23.0f);
	glVertex2f(1.00, 23.0f);
	glVertex2f(1.00f, 26.0f);
	glVertex2f(-1.00f, 26.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,46);
    twintowerwindow(0.5,0.5,-1.50,48);
    twintowerwindow(0.5,0.5,-1.50,50);
	glBegin(GL_POLYGON);
	setColor("twintower"); // Yellow
	glVertex2f(2.50, 5.0f);
	glVertex2f(12.5f, 5.0f);
	glVertex2f(12.5f, 6.0f);
	glVertex2f(2.50, 6.0f);
	glEnd();
    buildingwindow(0.3,0.2,16,22);
    buildingwindow(0.3,0.2,16,23);
    glBegin(GL_POLYGON);
	setColor("twintower"); // Yellow
	glVertex2f(2.50, 6.0f);
	glVertex2f(12.5f, 6.0f);
	glVertex2f(12.5f, 8.0f);
	glVertex2f(2.50, 8.0f);
	glEnd();
    buildingwindow(0.3,0.2,16,35);
    buildingwindow(0.3,0.2,16,34);
	glPopMatrix();

	int x=10;
    int y=20;

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-7,3,0);
	glBegin(GL_POLYGON);
	setColor("twintower"); // Yellow
	glVertex2f(-2.50+x, 0.0f);
	glVertex2f(2.50+x, 0.0f);
	glVertex2f(2.50f+x, 10.0f);
	glVertex2f(-2.50f+x, 10.0f);
	glEnd();
     twintowerwindow(0.5,0.5,-1.5+y,16);
    twintowerwindow(0.5,0.5,-5+y,16);
    twintowerwindow(0.5,0.5,1.3+y,16);
    twintowerwindow(0.5,0.5,-1.5+y,14);
    twintowerwindow(0.5,0.5,-5+y,14);
    twintowerwindow(0.5,0.5,1.3+y,14);
    twintowerwindow(0.5,0.5,-1.5+y,12);
    twintowerwindow(0.5,0.5,-5+y,12);
    twintowerwindow(0.5,0.5,1.3+y,12);
    twintowerwindow(0.5,0.5,-1.5+y,10);
    twintowerwindow(0.5,0.5,-5+y,10);
    twintowerwindow(0.5,0.5,1.3+y,10);
    twintowerwindow(0.5,0.5,1.3+y,8);
    twintowerwindow(0.5,0.5,-1.5+y,8);
    twintowerwindow(0.5,0.5,-5+y,8);
    twintowerwindow(0.5,0.5,1.3+y,6);
    twintowerwindow(0.5,0.5,-1.5+y,6);
    twintowerwindow(0.5,0.5,-5+y,6);
    twintowerwindow(0.5,0.5,1.3+y,4);
    twintowerwindow(0.5,0.5,-1.5+y,4);
    twintowerwindow(0.5,0.5,-5+y,4);
    twintowerwindow(0.5,0.5,1.3+y,2);
    twintowerwindow(0.5,0.5,-1.5+y,2);
    twintowerwindow(0.5,0.5,-5+y,2);
	glBegin(GL_POLYGON);
	setColor("twintower");// Yellow
	glVertex2f(-2.00+x, 10.0f);
	glVertex2f(2.00+x, 10.0f);
	glVertex2f(2.00f+x, 16.0f);
	glVertex2f(-2.00f+x, 16.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,18);
    twintowerwindow(0.5,0.5,-4+y,18);
    twintowerwindow(0.5,0.5,1+y,18);
    twintowerwindow(0.5,0.5,-1.50+y,20);
    twintowerwindow(0.5,0.5,-4+y,20);
    twintowerwindow(0.5,0.5,1+y,20);
    twintowerwindow(0.5,0.5,-1.50+y,22);
    twintowerwindow(0.5,0.5,-4+y,22);
    twintowerwindow(0.5,0.5,1+y,22);
    twintowerwindow(0.5,0.5,-1.50+y,24);
    twintowerwindow(0.5,0.5,-4+y,24);
    twintowerwindow(0.5,0.5,1+y,24);
    twintowerwindow(0.5,0.5,-1.50+y,26);
    twintowerwindow(0.5,0.5,-4+y,26);
    twintowerwindow(0.5,0.5,1+y,26);
    twintowerwindow(0.5,0.5,-1.50+y,28);
    twintowerwindow(0.5,0.5,-4+y,28);
    twintowerwindow(0.5,0.5,1+y,28);
    twintowerwindow(0.5,0.5,-1.50+y,30);
    twintowerwindow(0.5,0.5,-4+y,30);
    twintowerwindow(0.5,0.5,1+y,30);
	glBegin(GL_POLYGON);
	setColor("twintower");// Yellow
	glVertex2f(-1.50+x, 16.0f);
	glVertex2f(1.50+x, 16.0f);
	glVertex2f(1.50f+x, 23.0f);
	glVertex2f(-1.50f+x, 23.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,32);
    twintowerwindow(0.5,0.5,-4+y,32);
    twintowerwindow(0.5,0.5,-1.50+y,34);
    twintowerwindow(0.5,0.5,-4+y,34);
    twintowerwindow(0.5,0.5,-1.50+y,36);
    twintowerwindow(0.5,0.5,-4+y,36);
    twintowerwindow(0.5,0.5,-1.50+y,38);
    twintowerwindow(0.5,0.5,-4+y,38);
    twintowerwindow(0.5,0.5,-1.50+y,40);
    twintowerwindow(0.5,0.5,-4+y,40);
    twintowerwindow(0.5,0.5,-1.50+y,42);
    twintowerwindow(0.5,0.5,-4+y,42);
    twintowerwindow(0.5,0.5,-1.50+y,44);
    twintowerwindow(0.5,0.5,-4+y,44);
	glBegin(GL_POLYGON);
	setColor("twintower");// Yellow
	glVertex2f(-1.00+x, 23.0f);
	glVertex2f(1.00+x, 23.0f);
	glVertex2f(1.00f+x, 26.0f);
	glVertex2f(-1.00f+x, 26.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,46);
    twintowerwindow(0.5,0.5,-1.50+y,48);
    twintowerwindow(0.5,0.5,-1.50+y,50);
	glPopMatrix();

}
void temp(int x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    BridgeBox();
    glPopMatrix();
}
void bridge()
{
temp(-40);
temp(-20);
temp(0);
temp(20);
temp(35);
}
void tempbuild()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1,1.5,0);
    drawBuildingL();
    glPopMatrix();
}
void trainLine()
{
	glBegin(GL_POLYGON);
	glColor3ub(82, 71, 67); // Yellow
	glVertex2f(-41.0f, 0.0f);
	glVertex2f(41.0f, 0.0f);
	glVertex2f(41.0f, -1.00f);
	glVertex2f(-41.0f, -1.0f);
	glEnd();

}
void tempTrainLine()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,3,0);
    trainLine();
    glPopMatrix();
}
void BridgeRaling()
{   
    glBegin(GL_POLYGON);
	glColor3ub(2, 42, 50); // Yellow
	glVertex2f(-4.0f, 7.0f);
	glVertex2f(-7.0f, 7.0f);
	glVertex2f(-7.0f, 8.0f);
	glVertex2f(-4.0f, 8.0f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(2, 42, 50); // Yellow
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-5.0f, 7.0f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-6.0f, 0.0f);
	glEnd();

    int x=4;
	glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 7.0f);
	glVertex2f(0.0f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 5.0f);
	glVertex2f(-1.0f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 4.0f);
	glVertex2f(-1.50f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 2.0f);
	glVertex2f(-2.0f+x, 0.0f);
    glEnd();
    int y=-4;
	glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 7.0f);
	glVertex2f(-10.0f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 5.0f);
	glVertex2f(-9.50f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 4.0f);
	glVertex2f(-9.0f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 2.0f);
	glVertex2f(-8.0f+y, 0.0f);
    glEnd();


}
void tempRail(int x)
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,2,0);
    BridgeRaling();
    glPopMatrix();
}
void tempRailing()
{
	tempRail(40);
	tempRail(20);
    tempRail(0);
	tempRail(-20);
	tempRail(-40);

}
void drawTrain(){

    gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
    glPushMatrix();
    glTranslatef(0,220, 0);
    //start of color and drawing

    //main body
    glColor3ub (102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0,170);
    glVertex2i(440,170);
    glVertex2i(440,210);
    glVertex2i(0,210);
    glEnd();

    //upperLine main body
    glColor3ub (102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(5,210);
    glVertex2i(435,210);
    glVertex2i(435,215);
    glVertex2i(5,215);
    glEnd();

    glColor3ub (61, 69, 82);
    glBegin(GL_QUADS);
    glVertex2i(5,210);
    glVertex2i(35,210);
    glVertex2i(35,215);
    glVertex2i(5,215);
    glEnd();



    //face
    glColor3ub (102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0,170);
    glVertex2i(40,170);
    glVertex2i(40,205);
    glVertex2i(0,205);
    glEnd();

    //face stripe
    glColor3ub (106, 120, 133);
    glBegin(GL_QUADS);
    glVertex2i(0,175);
    glVertex2i(40,175);
    glVertex2i(40,180);
    glVertex2i(0,180);
    glEnd();


    //lights
   
    glColor3ub (226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(5,175);
    glVertex2i(10,175);
    glVertex2i(10,185);
    glVertex2i(5,185);
    glEnd();

   
    glColor3ub (226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(30,175);
    glVertex2i(35,175);
    glVertex2i(35,185);
    glVertex2i(30,185);
    glEnd();

    //frontWindow
    glColor3ub (146, 168, 175);
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(5,190);
    glVertex2i(35,190);
    glVertex2i(35,205);
    glVertex2i(5,205);
    glEnd();

    //long stripes
    //up
    glColor3ub (148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40,205);
    glVertex2i(440,205);
    glVertex2i(440,210);
    glVertex2i(40,210);
    glEnd();


    //down
    glColor3ub (148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40,175);
    glVertex2i(65,175);
    glVertex2i(65,180);
    glVertex2i(40,180);
    glEnd();

    glColor3ub (148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(100,175);
    glVertex2i(200,175);
    glVertex2i(200,180);
    glVertex2i(100,180);
    glEnd();

    glColor3ub (148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(235,175);
    glVertex2i(335,175);
    glVertex2i(335,180);
    glVertex2i(235,180);
    glEnd();

    glColor3ub (148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(370,175);
    glVertex2i(440,175);
    glVertex2i(440,180);
    glVertex2i(370,180);
    glEnd();



    //train windows and door component(1)
    //window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(55,185);
    glVertex2i(65,185);
    glVertex2i(65,200);
    glVertex2i(55,200);
    glEnd();

    //doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(70,170);
    glVertex2i(80,170);
    glVertex2i(80,200);
    glVertex2i(70,200);
    glEnd();

   setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(85,170);
    glVertex2i(95,170);
    glVertex2i(95,200);
    glVertex2i(85,200);
    glEnd();
    //end doors

    //more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(100,185);
    glVertex2i(110,185);
    glVertex2i(110,200);
    glVertex2i(100,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(115,185);
    glVertex2i(125,185);
    glVertex2i(125,200);
    glVertex2i(115,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(130,185);
    glVertex2i(140,185);
    glVertex2i(140,200);
    glVertex2i(130,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(145,185);
    glVertex2i(155,185);
    glVertex2i(155,200);
    glVertex2i(145,200);
    glEnd();
    //end of window + doors component(1)

    //train windows and door component(2)
    //window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(185,185);
    glVertex2i(195,185);
    glVertex2i(195,200);
    glVertex2i(185,200);
    glEnd();

    //doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(200,170);
    glVertex2i(210,170);
    glVertex2i(210,200);
    glVertex2i(200,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(215,170);
    glVertex2i(225,170);
    glVertex2i(225,200);
    glVertex2i(215,200);
    glEnd();
    //end doors

    //more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(230,185);
    glVertex2i(240,185);
    glVertex2i(240,200);
    glVertex2i(230,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(245,185);
    glVertex2i(255,185);
    glVertex2i(255,200);
    glVertex2i(245,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(260,185);
    glVertex2i(270,185);
    glVertex2i(270,200);
    glVertex2i(260,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(275,185);
    glVertex2i(285,185);
    glVertex2i(285,200);
    glVertex2i(275,200);
    glEnd();
    //end of window + doors component(2)

    //train windows and door component(3)
    //window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(325,185);
    glVertex2i(335,185);
    glVertex2i(335,200);
    glVertex2i(325,200);
    glEnd();

    //doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(340,170);
    glVertex2i(350,170);
    glVertex2i(350,200);
    glVertex2i(340,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(355,170);
    glVertex2i(365,170);
    glVertex2i(365,200);
    glVertex2i(355,200);
    glEnd();
    //end doors

    //more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(370,185);
    glVertex2i(380,185);
    glVertex2i(380,200);
    glVertex2i(370,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(385,185);
    glVertex2i(395,185);
    glVertex2i(395,200);
    glVertex2i(385,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(400,185);
    glVertex2i(410,185);
    glVertex2i(410,200);
    glVertex2i(400,200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(415,185);
    glVertex2i(425,185);
    glVertex2i(425,200);
    glVertex2i(415,200);
    glEnd();
    //end of window + doors component(3)


    //end of color and drawing
    glPopMatrix();
}
float trainpos=60;
float trainspeed=0.15;
void tempTrain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos,0,0);//update this to make animation
    glScalef(30,30,30);
    drawTrain();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos-20,0,0);//update this to make animation
    glScalef(-30,30,30);
    drawTrain();
    glPopMatrix();
}
void reflectionTrain()
{
    gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
    glPushMatrix();
    glTranslatef(0,220, 0);
    //start of color and drawing

    //main body





    //face



    //lights
   
    glColor3ub (226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(5,175);
    glVertex2i(10,175);
    glVertex2i(10,185);
    glVertex2i(5,185);
    glEnd();

   
    glColor3ub (226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(30,175);
    glVertex2i(35,175);
    glVertex2i(35,185);
    glVertex2i(30,185);
    glEnd();

    //frontWindow
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(5,190);
    glVertex2i(35,190);
    glVertex2i(35,205);
    glVertex2i(5,205);
    glEnd();

   

    //train windows and door component(1)
    //window
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(55,185);
    glVertex2i(65,185);
    glVertex2i(65,200);
    glVertex2i(55,200);
    glEnd();

    //doors
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(70,170);
    glVertex2i(80,170);
    glVertex2i(80,200);
    glVertex2i(70,200);
    glEnd();

   glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(85,170);
    glVertex2i(95,170);
    glVertex2i(95,200);
    glVertex2i(85,200);
    glEnd();
    //end doors

    //more windows
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(100,185);
    glVertex2i(110,185);
    glVertex2i(110,200);
    glVertex2i(100,200);
    glEnd();

   glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(115,185);
    glVertex2i(125,185);
    glVertex2i(125,200);
    glVertex2i(115,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(130,185);
    glVertex2i(140,185);
    glVertex2i(140,200);
    glVertex2i(130,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(145,185);
    glVertex2i(155,185);
    glVertex2i(155,200);
    glVertex2i(145,200);
    glEnd();
    //end of window + doors component(1)

    //train windows and door component(2)
    //window
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(185,185);
    glVertex2i(195,185);
    glVertex2i(195,200);
    glVertex2i(185,200);
    glEnd();

    //doors
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(200,170);
    glVertex2i(210,170);
    glVertex2i(210,200);
    glVertex2i(200,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(215,170);
    glVertex2i(225,170);
    glVertex2i(225,200);
    glVertex2i(215,200);
    glEnd();
    //end doors

    //more windows
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(230,185);
    glVertex2i(240,185);
    glVertex2i(240,200);
    glVertex2i(230,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(245,185);
    glVertex2i(255,185);
    glVertex2i(255,200);
    glVertex2i(245,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(260,185);
    glVertex2i(270,185);
    glVertex2i(270,200);
    glVertex2i(260,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(275,185);
    glVertex2i(285,185);
    glVertex2i(285,200);
    glVertex2i(275,200);
    glEnd();
    //end of window + doors component(2)

    //train windows and door component(3)
    //window
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(325,185);
    glVertex2i(335,185);
    glVertex2i(335,200);
    glVertex2i(325,200);
    glEnd();

    //doors
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(340,170);
    glVertex2i(350,170);
    glVertex2i(350,200);
    glVertex2i(340,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(355,170);
    glVertex2i(365,170);
    glVertex2i(365,200);
    glVertex2i(355,200);
    glEnd();
    //end doors

    //more windows
    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(370,185);
    glVertex2i(380,185);
    glVertex2i(380,200);
    glVertex2i(370,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(385,185);
    glVertex2i(395,185);
    glVertex2i(395,200);
    glVertex2i(385,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(400,185);
    glVertex2i(410,185);
    glVertex2i(410,200);
    glVertex2i(400,200);
    glEnd();

    glColor3ub (233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(415,185);
    glVertex2i(425,185);
    glVertex2i(425,200);
    glVertex2i(415,200);
    glEnd();
    //end of window + doors component(3)


    //end of color and drawing
    glPopMatrix();
}
void tempreflectionTrain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos+10,-3,0);//update this to make animation
    glScalef(30,-30,30);
    reflectionTrain();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos-20,-3,0);//update this to make animation
    glScalef(-30,-30,30);
    reflectionTrain();
    glPopMatrix();
}
float Shippos=-120;
float Shipspeed=0.10;
void ship()
{
    gluOrtho2D(-50.0,50.0,-50.0,50.0);
    glPushMatrix();
    glTranslatef(Shippos,-30, 0);
	 glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    setColor("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    setColor("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    setColor("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    setColor("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    setColor("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    setColor("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    setColor("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    setColor("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    setColor("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    setColor("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    setColor("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    setColor("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    setColor("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    setColor("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    setColor("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    setColor("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     setColor("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    setColor("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     setColor("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

        glBegin(GL_POLYGON); //Container-1
    glColor3ub(213, 39, 39 );
    glVertex2f(13.00,3.25);
    glVertex2f(13.00,7.75);
    glVertex2f(21.25,7.75);
    glVertex2f(21.25,3.25);
    glVertex2f(13.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25,3.25);
    glVertex2f(21.25,7.75);
    glVertex2f(25.00,7.75);
    glVertex2f(25.00,3.25);
    glVertex2f(21.25,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00,3.25);
    glVertex2f(25.00,7.75);
    glVertex2f(30.00,7.75);
    glVertex2f(30.00,3.25);
    glVertex2f(25.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00,3.25);
    glVertex2f(30.00,7.75);
    glVertex2f(33.25,7.75);
    glVertex2f(33.25,3.25);
    glVertex2f(30.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00,7.75);
    glVertex2f(14.00,11.50);
    glVertex2f(18.00,11.50);
    glVertex2f(18.00,7.75);
    glVertex2f(14.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00,7.75);
    glVertex2f(18.00,11.50);
    glVertex2f(25.50,11.50);
    glVertex2f(25.50,7.75);
    glVertex2f(18.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50,7.75);
    glVertex2f(25.50,11.50);
    glVertex2f(29.75,11.50);
    glVertex2f(29.75,7.75);
    glVertex2f(25.50,7.75);
    glEnd();

    glPopMatrix();

}
void tempShip()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(40,35,0);
    ship();
    glPopMatrix();
}
void drawCircle(float radius, float cX, float cY,float cd){

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(194,214,246);
            float pi=3.1416;
            float A=(i*2*pi)/cd;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();

}
void drawCircle2(float radius, float cX, float cY,float cd){

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub (233, 209, 102);
            float pi=3.1416;
            float A=(i*2*pi)/cd;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();

}
void drawCircle3(float radius, float cX, float cY,float cd){

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub (233, 227, 170);
            float pi=3.1416;
            float A=(i*2*pi)/cd;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();

}
void cloud()
{
    drawCircle(1,20,25,400);
    drawCircle(1,19,25,400);
    drawCircle(1,18,25,400);
    drawCircle(1,-20,28,400);
    drawCircle(1,-19,28,400);
    drawCircle(1,-18,28,400);
    drawCircle(1,11,20,400);
    drawCircle(1,12,20,400);
    drawCircle(1,10,20,400);
    drawCircle(1,-10,25,400);
    drawCircle(1,-11,25,400);
    drawCircle(1,-12,25,400);

}
float cloudpos=32;
float cloudspeed=0.05;
void animationCloud()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloudpos,0,0);//update this to make animation
    cloud();
    glPopMatrix();
}
void drawMoon()
{
    drawCircle2(4,-20,20,200);
    
}
void update(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,update,0);
    if(trainpos <= -36) trainpos = 60;
    trainpos -= trainspeed;

    if(cloudpos <= -30) cloudpos = 40;
    cloudpos -= cloudspeed;

    if(planPos >= 36) planPos = -30;
    planPos += planSpeed;

    if(Shippos >= 43) Shippos = -42;
    Shippos += Shipspeed;


}
void display1() {
    glClear(GL_COLOR_BUFFER_BIT);	
    skybackground();
    star();
    drawMoon();
    tempairPlan();
    drawWater();
    twintowerl();
    tempbuild(); 
    drawBuilding();  
    bridge();
    BridgeBox();
    tempRailing();
    tempTrainLine();
    tempTrain();
    tempreflectionTrain();
    tempRailing(); 
    tempShip();
    animationCloud(); 
    glFlush();
    glutSwapBuffers();
}
void timerCallback(int value) {
    currentDisplay= currentDisplay+1;  // Switch to display 2 after the delay
    glutPostRedisplay(); // Request a redraw to update the display
}

void tempdisplay()
{
    glPushMatrix();
    glScalef(1.3,1.7,1);
    display2();
    glPopMatrix();
}

void display() {
    // Switch between displays based on the currentDisplay variable
    if (currentDisplay == 1) {
        //gluOrtho2D(-41,41,-25,30);
        display3();
    } else if (currentDisplay == 2) {
        //gluOrtho2D(-32,31,-17,18);
        display1();
        //glutTimerFunc(10000, timerCallback, 0);
    } else if(currentDisplay == 3)
    {
        tempdisplay();
        
    }
}
void init() {
    glPointSize(5.0);
    //glClearColor(0.7f, 0.9f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-41,41,-25,30);
    
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Colored Polygon");
    glutDisplayFunc(display);
    init();
    glutTimerFunc(0, update, 0);
    glutTimerFunc(10000, timerCallback, 0);
    glutTimerFunc(15000, timerCallback, 0);
    glutTimerFunc(0, shipMovement, 0);

	glutKeyboardFunc(keyboard);
    glutPostRedisplay();
	//glutKeyboardFunc(keycanal);

	//gate 1
    glutTimerFunc(20, upgate1_down, 0);
    glutTimerFunc(20, upgate1_up, 0);


    //gate 2

    glutTimerFunc(20, upgate2_down, 0);
    glutTimerFunc(20, upgate2_up, 0);

    //gate 3

     glutTimerFunc(20, upgate3_down, 0);
     glutTimerFunc(20, upgate3_up, 0);

     //gate 4

     glutTimerFunc(20, upgate4_down, 0);
     glutTimerFunc(20, upgate4_up, 0);

     //gate 5

     glutTimerFunc(20, upgate5_down, 0);
     glutTimerFunc(20, upgate5_up, 0);

     //gate 6

     glutTimerFunc(20, upgate6_down, 0);
     glutTimerFunc(20, upgate6_up, 0);
     //gate 7

     glutTimerFunc(20, upgate7_down, 0);
     glutTimerFunc(20, upgate7_up, 0);

     //gate 8

     glutTimerFunc(20, upgate8_down, 0);
     glutTimerFunc(20, upgate8_up, 0);


     //**************************canal

     //canal 1
     glutTimerFunc(20, canal1_up, 0);
     //canal 2
     glutTimerFunc(20, canal2_up, 0);
     //canal 3
     glutTimerFunc(20, canal3_up, 0);
     //canal 5
     glutTimerFunc(20, canal5_up, 0);
     //canal 6
     glutTimerFunc(20, canal6_up, 0);
     //canal 7
     glutTimerFunc(20, canal7_up, 0);

    glutMainLoop();

    return 0;
}