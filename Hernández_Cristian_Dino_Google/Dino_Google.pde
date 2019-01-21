 int x=10, y=10, i=0;
 int w=0, z=0;
 int x1=1150,vel=0;
 
 void setup(){
    size(1200,500);
    background(0);
    PFont font;
    font=loadFont("ComicSansMS-48.vlw");
    textFont(font);
    text("DINOSAURIO GOOGLE",5,45);
}
        
 void draw(){   
   stroke(255);
   strokeWeight(3);
   line(0,350,1200,350);
   beginShape();
   fill(255);
   vertex(110+x,140+y); 
   vertex(170+x,140+y);
   vertex(170+x,150+y); 
   vertex(180+x,150+y); 
   vertex(180+x,190+y); 
   vertex(130+x,190+y); 
   vertex(130+x,200+y); 
   vertex(160+x,200+y); 
   vertex(160+x,210+y);
   vertex(120+x,210+y); 
   vertex(120+x,230+y); 
   vertex(140+x,230+y);
   vertex(140+x,250+y);
   vertex(130+x,250+y);
   vertex(130+x,240+y);
   vertex(120+x,240+y);
   vertex(120+x,280+y);
   vertex(110+x,280+y);
   vertex(110+x,295+y);
   vertex(100+x,295+y);
   vertex(100+x,305+y);
   vertex(90+x,305+y);
   vertex(90+x,345+y);
   vertex(105+x,345+y);
   vertex(105+x,350+y);
   vertex(85+x,350+y);
   vertex(85+x,320+y);
   vertex(75+x,320+y);
   vertex(75+x,310+y);
   vertex(65+x,310+y);
   vertex(65+x,320+y);
   vertex(55+x,320+y);
   vertex(55+x,330+y);
   vertex(50+x,330+y);
   vertex(50+x,345+y);
   vertex(65+x,345+y);
   vertex(65+x,350+y);
   vertex(45+x,350+y);
   vertex(45+x,310+y);
   vertex(35+x,310+y);
   vertex(35+x,300+y);
   vertex(30+x,300+y);
   vertex(30+x,290+y);
   vertex(25+x,290+y);
   vertex(25+x,280+y);
   vertex(20+x,280+y);
   vertex(20+x,270+y);
   vertex(15+x,270+y);
   vertex(15+x,225+y);
   vertex(15+x,225+y);
   vertex(15+x,245+y);
   vertex(20+x,245+y);
   vertex(20+x,255+y);
   vertex(30+x,255+y);
   vertex(30+x,265+y);
   vertex(50+x,265+y);
   vertex(50+x,255+y);
   vertex(60+x,255+y);
   vertex(60+x,245+y);
   vertex(70+x,245+y);
   vertex(70+x,235+y);
   vertex(80+x,235+y);
   vertex(80+x,225+y);
   vertex(90+x,225+y);
   vertex(90+x,150+y);
   vertex(100+x,150+y);
   vertex(100+x,140+y);
   vertex(110+x,140+y);
   endShape();
   ojo();
   //ojo2();
   }
 void keyPressed() {
  background(0);
  switch(keyCode) {
  case 38:
  z=1-z;
    y=y-5;
    break;
  case 40:
  z=1-z;
    y=y+5;
    break;
  case 39:
  w=1-w;
  if(x<1170)
    x=x+5; 
    else
    x=0;
    break;
  case 37:
  w=1-w;
  if(x>-5)
    x=x-5;
    else
    x=1170;
    break;
  }
}
void ojo(){
   if(w==0){
   noFill();
   fill(#A52828);
   rect(110+x,150+y,20,20);   
   }
   else
   if(w==1){
    noFill();
   fill(#2AC473);
   rect(110+x,150+y,30,30);   
   }
}
//void ojo2(){
//   if(z==0){
//   noFill();
//   fill(#2E2AC4);
//   rect(110+x,150+y,30,30);   
//   }
//   else
//   if(z==1){
//    noFill();
//   fill(#2AB8C4);
//   rect(110+x,150+y,5,5);   
//   }
//}
