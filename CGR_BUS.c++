#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

int main ( ) 
{   
	int i, x=0, y=0;
    initwindow(1366,768);
	
	
   	for(i=0;i<1400;i++)
	{
    	
    	cleardevice();
    	
    	if(i==1350)
    	{
    		settextstyle(10,0,3);
    		outtextxy(550,330,"Thanks For Watching . . . ");
    		outtextxy(500,360,"Credit goes to :- VAIBHAV SONAR ");
    		break;
		}
		
    	/* Road */
    	line(0,650,1366,650);
    	
    	/* Clouds */
    	ellipse(350+150-i,105,10,180,30,30);
		ellipse(380+150-i,130,285,90,40,30);
		ellipse(365+150-i,160,210,360,25,30);
		ellipse(330+150-i,150,180,300,30,30);
		ellipse(320+150-i,130,85,235,30,25);
	
	
		ellipse(140+200-i,50-10,0,180,25,20);
		ellipse(165+200-i,70-10,260,90,20,20);
		ellipse(140+200-i,90-10,180,360,20,20);
		ellipse(120+200-i,70-10,90,270,20,20);
    	
    	
    	ellipse(140+500-i,50-20,0,180,25,20);
		ellipse(165+500-i,70-20,260,90,20,20);
		ellipse(140+500-i,90-20,180,360,20,20);
		ellipse(120+500-i,70-20,90,270,20,20);
		
		ellipse(350+600-i,105-50,10,180,30,30);
		ellipse(380+600-i,130-50,285,90,40,30);
		ellipse(365+600-i,160-50,210,360,25,30);
		ellipse(330+600-i,150-50,180,300,30,30);
		ellipse(320+600-i,130-50,85,235,30,25);
    	
    	ellipse(140+1000-i,50,0,180,25,20);
		ellipse(165+1000-i,70,260,90,20,20);
		ellipse(140+1000-i,90,180,360,20,20);
		ellipse(120+1000-i,70,90,270,20,20);
    	
    	
    	ellipse(350+1000-(2*i),105-10,10,180,30,30); 
		ellipse(380+1000-(2*i),130-10,285,90,40,30);
		ellipse(365+1000-(2*i),160-10,210,360,25,30);
		ellipse(330+1000-(2*i),150-10,180,300,30,30);
		ellipse(320+1000-(2*i),130-10,85,235,30,25);
		
		ellipse(140+1300-(2*i),50+25,0,180,25,20);
		ellipse(165+1300-(2*i),70+25,260,90,20,20);
		ellipse(140+1300-(2*i),90+25,180,360,20,20);
		ellipse(120+1300-(2*i),70+25,90,270,20,20);
		
		ellipse(350+1400-(2*i),105-50,10,180,30,30); 
		ellipse(380+1400-(2*i),130-50,285,90,40,30);
		ellipse(365+1400-(2*i),160-50,210,360,25,30);
		ellipse(330+1400-(2*i),150-50,180,300,30,30);
		ellipse(320+1400-(2*i),130-50,85,235,30,25);
		
		
    	/* Bus body */
		line(20+i,400,435+i,400); // Top
		
		line(20+i,400,20+i,600); // Back
		line(26+i,490,26+i,595); // Inner Back
		
		line(435+i,400,435+i,500);//Front Side  
		
		line(430+i,490,430+i,505); // Inner Front Vertical
		
		line(435+i,500,460+i,500); // Front to Bonnet
		
		arc(460+i,550,360,90,50);//Bonnet
		arc(455+i,555,360,90,51);//Inner Bonnet
		line(430+i,505,455+i,505); // Inner Bonnet Horizontal
		
		//Windows
		rectangle(30+i,410,100+i,480); // LHS 1st Window
		
		
		rectangle(110+i,410,180+i,480); // LHS 2nd Window
		rectangle(190+i,410,260+i,480); // LHS 3rd Window
		rectangle(270+i,410,340+i,480); // LHS 4th Window
		rectangle(350+i,410,420+i,480);	// Driver Window
		
		line(26+i,490,430+i,490); // Below Windows Inner line 
	
	
		/* Driver Window View */
		//Driver
		circle(375+i,430,12); // Head
		
		line(370+i,440,370+i,450); //LHS Neck
		line(380+i,440,380+i,450); //RHS Neck
		
		line(370+i,450,358+i,455); //LHS Shoulder
		line(380+i,450,392+i,455); //RHS Shoulder
		
		line(392+i,455,392+i,465); //RHS Side (Up-wards)
		line(392+i,472,392+i,480); //RHS Side (Down-wards)
		
		line(358+i,455,358+i,480); //LHS Side
		
		line(370+i,460,370+i,470); //Hand LHS
		line(380+i,460,380+i,465); //Hand RHS
		
		line(370+i,470,400+i,471); //ForeHand LHS
		line(380+i,465,400+i,466); //ForeHand RHS
		
		// Strearing Handle
		circle(443+i-38,470,6); // Strearing Wheel
		line(420+i,480,408+i,470); //Handle
	
	
	
		/* Lower Body */
		line(20+i,600,48+i,600); // Back to Mud Gurad
		line(26+i,595,44+i,595); // Inner Back to Mud Gurad
		
		arc(92+i,600,0,180,45); // 1st Mud Guard
		arc(92+i,595,0,180,49);//Inner Mud Guard
	
		line(135+i,600,303+i,600); // Mud Guard Join
		line(140+i,595,299+i,595); // Inner Mud Guard Join
	
		arc(347+i,600,0,180,45); // 2nd Mud Guard
		arc(347+i,595,0,180,49);//Inner Mud Guard
	
		line(390+i,600,510+i,600); // Mud Gurad to Bonnet
		line(395+i,595,505+i,595); // Inner Mud Gurad to Bonnet
		
		line(510+i,600,510+i,548); // Below Bonnet Front 
		line(505+i,595,505+i,548); // Inner Below Bonnet Front
		
		
		/* Tyres */
		circle(55+i+35,610,35); // LHS
		pieslice(55+i+35,610,0-(5*i),90-(5*i),30); 
		pieslice(55+i+35,610,180-(5*i),270-(5*i),30);
		
    	circle(310+i+35,610,35);// RHS
    	pieslice(310+i+35,610,0-(5*i),90-(5*i),30); 
		pieslice(310+i+35,610,180-(5*i),270-(5*i),30); 
		
		
		/* Rain */
		settextstyle(10,0,3);
		
		outtextxy(x+(rand()%200) +1,y+(rand()%200) +1,"|");
    	outtextxy(x+(rand()%400) +1,y+(rand()%400) +1,"!");
    	outtextxy(x+(rand()%600) +1,y+(rand()%600) +1,"|");
    	delay(1);
    	outtextxy(x+(rand()%800) +1,y+(rand()%800) +1,"!");
    	outtextxy(x+(rand()%1000) +1,y+(rand()%1000) +1,"!");
		outtextxy(x+(rand()%1200) +1,y+(rand()%1200) +1,"!");
		    	
    	delay(1);
    	
	}
	
    getch() ;
    
    return 0 ;
}