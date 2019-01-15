int i=0;
int x=0;
int y=0;

void setup() {
  size(1200, 900);
  PFont font;
  font=loadFont("ComicSansMS-14.vlw");
  textFont(font);
  text("INICIO",5,80);
  text("FIN",1170,895);
}

void draw() {
  fill(0,102,204);
  rect(0,100,50,25);
  rect(95,100,1104,25);
  rect(0,170,350,25);
  rect(395,170,804,25);
  rect(0,240,750,25);
  rect(795,240,404,25);
  rect(0,310,150,25);
  rect(195,310,1004,25);
  rect(0,380,950,25);
  rect(995,380,204,25);
  rect(0,450,1050,25);
  rect(1095,450,104,25);
  rect(0,520,650,25);
  rect(695,520,504,25);
  rect(0,590,450,25);
  rect(495,590,704,25);
  rect(0,660,250,25);
  rect(295,660,904,25);
  rect(0,730,550,25);
  rect(595,730,604,25);
  rect(0,800,1150,25);
  rect(1195,800,4,25);
  figura();
}

void figura() {
  beginShape();
  fill(247, 98, 67);
  vertex(10+x, 20+y);
  vertex(15+x, 20+y);
  vertex(15+x, 15+y);
  vertex(20+x, 15+y);
  vertex(20+x, 10+y);
  vertex(45+x, 10+y);
  vertex(45+x, 15+y);
  vertex(50+x, 15+y);
  vertex(50+x, 20+y);
  vertex(55+x, 20+y);
  vertex(55+x, 30+y);
  vertex(45+x, 30+y);
  vertex(45+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 30+y);
  vertex(10+x, 30+y);
  vertex(10+x, 20+y);
  endShape();

  beginShape();
  fill(255, 235, 205);
  vertex(15+x, 30+y);
  vertex(15+x, 40+y);
  vertex(20+x, 40+y);
  vertex(20+x, 45+y);
  vertex(45+x, 45+y);
  vertex(45+x, 40+y);
  vertex(50+x, 40+y);
  vertex(50+x, 30+y);
  vertex(45+x, 30+y);
  vertex(45+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 30+y);
  vertex(15+x, 30+y);
  endShape();
  fill(0);
  rect(25+x, 25+y, 5, 7.5);
  rect(35+x, 25+y, 5, 7.5);
}

void keyPressed() {
  background(255);
  switch(keyCode) {
  case 38:
    y=y-5;
    break;
  case 40:
    y=y+5;
    break;
  case 39:
  if(x<1170)
    x=x+5;
    else
    x=0;
    break;
  case 37:
  if(x>-5)
    x=x-5;
    else
    x=1170;
    break;
  }
}
