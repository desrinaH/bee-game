#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <mmsystem.h>

using namespace std;
void mainmenu(), game(), howtoplay();
float scoref=0, d1=0, d2=0, d3=0, d4=0, d5=0;
char score[9999], scorek[9999];
float xmouse, ymouse;


void background(){
rectangle(0,0,1400,800);
setfillstyle(SOLID_FILL, GREEN);
floodfill(1,1,WHITE);
}

    void flower1(float xf, float yf){
    xf=xf-250;
    yf=yf-745;
    //flagfleur = 1;

    circle(250+xf,745+yf,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(250+xf,745+yf,WHITE);
    line(250.03138+xf,785.05801+yf,240.94467+xf,768.57415+yf);
    line(240.94467+xf,768.57415+yf,221.32467+xf,773.06213+yf);
    line(221.32467+xf,773.06213+yf,228.57231+xf,755.46072+yf);
    line(228.57231+xf,755.46072+yf,211.74744+xf,746.40117+yf);
    line(211.74744+xf,746.40117+yf,229.34884+xf,737.60047+yf);
    line(229.34884+xf,737.60047+yf,222.87774+xf,720.2579+yf);
    line(222.87774+xf,720.2579+yf,240.47915+xf,726.47016+yf);
    line(240.47915+xf,726.47016+yf,249.02101+xf,708.60991+yf);
    line(249.02101+xf,708.60991+yf,258.31188+xf,726.00861+yf);
    line(258.31188+xf,726.00861+yf,277.23503+xf,718.44599+yf);
    line(277.23503+xf,718.44599+yf,269.98739+xf,737.60047+yf);
    line(269.98739+xf,737.60047+yf,288.36533+xf,746.66001+yf);
    line(288.36533+xf,746.66001+yf,270.24623+xf,756.23725+yf);
    line(270.24623+xf,756.23725+yf,276.97618+xf,774.0975+yf);
    line(276.97618+xf,774.0975+yf,258.85709+xf,768.66177+yf);
    line(258.85709+xf,768.66177+yf,250.03138+xf,785.05801+yf);

    line(240.94467+xf,768.57415+yf,245.41408+xf,753.57929+yf);
    line(228.57231+xf,755.46072+yf,241.92992+xf,750.28008+yf);
    line(229.34884+xf,737.60047+yf,240.8373+xf,741.75935+yf);
    line(240.47915+xf,726.47016+yf,245.20839+xf,736.46307+yf);
    line(258.31188+xf,726.00861+yf,251.71677+xf,735.85031+yf);
    line(269.98739+xf,737.60047+yf,258.81471+xf,740.61255+yf);
    line(270.24623+xf,756.23725+yf,258.14134+xf,750.75173+yf);
    line(258.85709+xf,768.66177+yf,253.27721+xf,754.28254+yf);

    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    floodfill(240.84365+xf,737.10351+yf,WHITE);
    floodfill(249.6831+xf,733.92441+yf,WHITE);
    floodfill(258.44501+xf,737.02597+yf,WHITE);
    floodfill(261.46903+xf,746.0205+yf,WHITE);
    floodfill(257.12684+xf,754.78241+yf,WHITE);
    floodfill(249.37294+xf,758.50428+yf,WHITE);
    floodfill(241.61904+xf,754.85995+yf,WHITE);
    floodfill(238.67255+xf,746.87343+yf,WHITE);


    }

    void flower2(float xf, float yf){
        xf=xf-450;
        yf=yf-745;

        circle(450+xf, 745+yf, 20);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(450+xf,745+yf,WHITE);
        arc(438.11959+xf,721.97963+yf,14.6,204.6,15); //q1
        arc(465.02223+xf,722.86988+yf,-39.4,153.8,15); //p1
        arc(477.2331+xf,746.38465+yf,-100,90,15); //n1
        arc(462.63343+xf,769.87995+yf,-159.1,39.5,15); //m1
        arc(435.7202+xf,767.98476+yf,146.3,-27.2,15); //s1
        arc(424.54477+xf,743.68112+yf,90,273,15); //r1

        setfillstyle(SOLID_FILL,RED);
        floodfill(457.63502+xf,764.77452+yf,WHITE);
    }
    void flower3(float xf, float yf){
        xf=xf-590;
        yf=yf-745;

        circle(590+xf, 745+yf, 10);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(590+xf,745+yf,WHITE);

        line(580.62951+xf,748.35038+yf,560.18566+xf,763.23894+yf);
        line(589.96946+xf,754.98543+yf,579.91271+xf,778.39955+yf);
        arc(571.10402+xf,770.81167+yf,-217,-35.8,12.4);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(571.10402+xf,770.81167+yf,WHITE);

        line(589.96946+xf,754.98543+yf,600.18773+xf,778.69955+yf);
        line(599.54413+xf,747.85116+yf,619.0015+xf,763.23894+yf);
        arc(609.55649+xf,770.98749+yf,-145,39,12.2);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(609.55649+xf,770.98749+yf,WHITE);

        line(599.54413+xf,747.85116+yf,628.31705+xf,743.69455+yf);
        line(595.88675+xf,736.93156+yf,614.98302+xf,722.50623+yf);
        arc(621.64644+xf,733.1015+yf,-57.9,122.1,12.5);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(621.64644+xf,733.1015+yf,WHITE);

        line(595.88675+xf,736.93156+yf,601.46634+xf,710.63347+yf);
        line(584.26606+xf,736.81763+yf,576.62487+xf,711.18145+yf);
        arc(589.02173+xf,710.90795+yf,0,180,12.4);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(589.02173+xf,710.90795+yf,WHITE);

        line(584.26606+xf,736.81763+yf,558.90705+xf,723.78484+yf);
        line(580.62951+xf,748.35038+yf,553.97529+xf,746.25176+yf);
        arc(556.46314+xf,735.03228+yf,78.4,258.4,11.5);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(556.46314+xf,735.03228+yf,WHITE);
    }

    void flower4(float xf, float yf){

        xf=xf-754.98008;
        yf=yf-745.09819;
        setfillstyle(SOLID_FILL,YELLOW);
        circle(744.8884+xf,745.55808+yf,5);
        circle(755.13784+xf,735.25349+yf,5);
        circle(765.64989+xf,745.86566+yf,5);
        circle(755.33807+xf,755.87713+yf,5);
        floodfill(744.8884+xf,745.55808+yf,WHITE);
        floodfill(755.13784+xf,735.25349+yf,WHITE);
        floodfill(765.64989+xf,745.86566+yf,WHITE);
        floodfill(755.33807+xf,755.87713+yf,WHITE);
        line(745.8352+xf,767.10755+yf,738.74492+xf,772.56162+yf);
        line(738.74492+xf,772.56162+yf,724.83704+xf,776.24311+yf);
        line(724.83704+xf,776.24311+yf,727.42773+xf,763.15335+yf);
        line(727.42773+xf,763.15335+yf,733.4272+xf,754.42685+yf);
        line(733.4272+xf,754.42685+yf,723.74623+xf,752.92698+yf);
        line(723.74623+xf,752.92698+yf,711.88364+xf,745.29128+yf);
        line(711.88364+xf,745.29128+yf,722.24636+xf,737.92829+yf);
        line(722.24636+xf,737.92829+yf,733.01815+xf,736.29207+yf);
        line(733.01815+xf,736.29207+yf,727.70043+xf,728.11097+yf);
        line(727.70043+xf,728.11097+yf,724.15529+xf,714.06675+yf);
        line(724.15529+xf,714.06675+yf,737.3814+xf,717.20284+yf);
        line(737.3814+xf,717.20284+yf,746.10791+xf,722.24785+yf);
        line(746.10791+xf,722.24785+yf,747.33507+xf,711.88512+yf);
        line(747.33507+xf,711.88512+yf,754.69806+xf,701.24969+yf);
        line(754.69806+xf,701.24969+yf,761.78835+xf,711.74877+yf);
        line(761.78835+xf,711.74877+yf,763.69727+xf,722.65691+yf);
        line(763.69727+xf,722.65691+yf,772.96919+xf,716.65743+yf);
        line(772.96919+xf,716.65743+yf,785.37719+xf,714.33945+yf);
        line(785.37719+xf,714.33945+yf,783.74097+xf,726.3384+yf);
        line(783.74097+xf,726.3384+yf,777.74149+xf,735.20126+yf);
        line(777.74149+xf,735.20126+yf,786.468+xf,737.11018+yf);
        line(786.468+xf,737.11018+yf,797.78519+xf,745.01858+yf);
        line(797.78519+xf,745.01858+yf,787.83152+xf,751.97252+yf);
        line(787.83152+xf,751.97252+yf,777.05974+xf,754.01779+yf);
        line(777.05974+xf,754.01779+yf,782.65015+xf,762.60795+yf);
        line(782.65015+xf,762.60795+yf,786.05895+xf,775.97041+yf);
        line(786.05895+xf,775.97041+yf,774.46905+xf,774.33419+yf);
        line(774.46905+xf,774.33419+yf,764.10633+xf,767.51661+yf);
        line(764.10633+xf,767.51661+yf,762.74281+xf,776.92487+yf);
        line(762.74281+xf,776.92487+yf,755.24347+xf,788.92382+yf);
        line(755.24347+xf,788.92382+yf,748.01683+xf,777.74298+yf);
        line(748.01683+xf,777.74298+yf,745.8352+xf,767.10755+yf);
        setfillstyle(SOLID_FILL,LIGHTRED);
        floodfill(754.98008+xf,745.09819+yf,WHITE);

    }

    void flower5(float xf, float yf){
        xf=xf-854.08235;
        yf=yf-743.77358;
        setfillstyle(SOLID_FILL,YELLOW);
        circle(854.08235+xf,743.77358+yf,12.5);
        floodfill(854.08235+xf,743.77358+yf,WHITE);
        line(863.8465+xf,742.01429+yf,887.57551+xf,731.61791+yf);
        line(887.57551+xf,731.61791+yf,893.21315+xf,721.12324+yf);
        line(893.21315+xf,721.12324+yf,880.98382+xf,720.68958+yf);
        line(880.98382+xf,720.68958+yf,860.74144+xf,736.66668+yf);

        line(857.90561+xf,734.48781+yf,859.95555+xf,709.21437+yf);
        line(859.95555+xf,709.21437+yf,854.07466+xf,699.45916+yf);
        line(854.07466+xf,699.45916+yf,847.84531+xf,708.86116+yf);
        line(847.84531+xf,708.86116+yf,851.057+xf,734.23918+yf);

        line(847.25062+xf,736.43493+yf,826.60839+xf,721.11071+yf);
        line(826.60839+xf,721.11071+yf,814.74841+xf,721.50604+yf);
        line(814.74841+xf,721.50604+yf,820.00068+xf,731.50231+yf);
        line(820.00068+xf,731.50231+yf,844.08288+xf,741.71607+yf);

        line(844.20848+xf,745.48401+yf,820.28763+xf,755.78304+yf);
        line(820.28763+xf,755.78304+yf,815.05101+xf,765.63971+yf);
        line(815.05101+xf,765.63971+yf,826.79963+xf,765.49185+yf);
        line(826.79963+xf,765.49185+yf,847.15192+xf,750.72543+yf);

        line(851.18523+xf,750.22752+yf,848.11566+xf,777.53727+yf);
        line(848.11566+xf,777.53727+yf,854.2045+xf,786.94729+yf);
        line(854.2045+xf,786.94729+yf,859.84045+xf,777.78887+yf);
        line(859.84045+xf,777.78887+yf,857.47834+xf,752.89942+yf);

        line(860.95318+xf,750.5452+yf,880.96821+xf,765.84236+yf);
        line(880.96821+xf,765.84236+yf,892.95417+xf,765.62443+yf);
        line(892.95417+xf,765.62443+yf,887.39704+xf,755.05499+yf);
        line(887.39704+xf,755.05499+yf,863.46717+xf,742.2445+yf);

        setfillstyle(SOLID_FILL,BLUE);
        floodfill(880.57896+xf,727.43187+yf,WHITE);
        floodfill(853.89412+xf,710.11013+yf,WHITE);
        floodfill(825.57074+xf,727.90003+yf,WHITE);
        floodfill(824.16627+xf,760.55385+yf,WHITE);
        floodfill(853.84092+xf,776.85416+yf,WHITE);
        floodfill(882.77815+xf,759.67095+yf,WHITE);
    }

    void bud1(int xb, int yb){
    yb=yb-745;
    xb = xb - 100;

    circle(100 + xb,745 + yb,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(100+xb,745+yb,WHITE);
    circle(100+xb,745+yb,15);
    setfillstyle(SOLID_FILL,BLUE); //here
    floodfill(100+xb,755+yb,WHITE); //here
    }
    void bud2(int xb, int yb){
    yb=yb-745;
    xb = xb - 100;

    circle(100 + xb,745 + yb,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(100+xb,745+yb,WHITE);
    circle(100+xb,745+yb,15);
    setfillstyle(SOLID_FILL,LIGHTRED); //here
    floodfill(100+xb,755+yb,WHITE); //here
    }
    void bud3(int xb, int yb){
    yb=yb-745;
    xb = xb - 100;

    circle(100 + xb,745 + yb,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(100+xb,745+yb,WHITE);
    circle(100+xb,745+yb,15);
    setfillstyle(SOLID_FILL,CYAN); //here
    floodfill(100+xb,755+yb,WHITE); //here
    }
    void bud4(int xb, int yb){
    yb=yb-745;
    xb = xb - 100;

    circle(100 + xb,745 + yb,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(100+xb,745+yb,WHITE);
    circle(100+xb,745+yb,15);
    setfillstyle(SOLID_FILL,RED); //here
    floodfill(100+xb,755+yb,WHITE); //here
    }
    void bud5(int xb, int yb){
    yb=yb-745;
    xb = xb - 100;

    circle(100 + xb,745 + yb,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(100+xb,745+yb,WHITE);
    circle(100+xb,745+yb,15);
    setfillstyle(SOLID_FILL,MAGENTA); //here
    floodfill(100+xb,755+yb,WHITE); //here
    }



void bee(float xs1, float ys1){
float xs,ys;
xs = xs1-85;
ys = ys1-100;

line(78.5761323977786+xs,69.6233716725012+ys,100.1525864827702+xs,69.6058338581841+ys);
line(100.1525864827702+xs,69.6058338581841+ys,120+xs,80+ys);
line(120+xs,80+ys,130+xs,100+ys);
line(130+xs,100+ys,120+xs,120+ys);
line(120+xs,120+ys,100+xs,130+ys);
line(100+xs,130+ys ,80+xs,130+ys);
line(80+xs,130+ys,60+xs,120+ys);
line(60+xs,120+ys,50+xs,100+ys);
line(50+xs,100+ys,60+xs,80+ys);
line(60+xs,80+ys,78.5761323977786+xs,69.6233716725012+ys);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(110+xs,100+ys,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(70+xs,100+ys,WHITE);
line(78.5761323977786+xs,69.6233716725012+ys,80+xs,130+ys);
line(100.1525864827702+xs,69.6058338581841+ys,100+xs,130+ys);
setfillstyle(SOLID_FILL,BLACK);
floodfill(90+xs,100+ys,WHITE);
line(30.5+xs,100+ys,53.3350100612058+xs,106.6700201224116+ys);
line(30.5+xs,100+ys,53.9555929791324+xs,92.0888140417351+ys);
setfillstyle(SOLID_FILL,BLACK);
floodfill(48+xs,100+ys,WHITE);

ellipse(76.4191242908651+xs,58.8853367304089+ys,-36,233,10,20);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(76.4191242908651+xs,58.8853367304089+ys,WHITE);
ellipse(103.1774509349331+xs,59.6781760383813+ys,-46,210,10,20);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(103.1774509349331+xs,59.6781760383813+ys,WHITE);
}




void pol1(float xs2, float ys2){
        xs2 = xs2 - 20;
        ys2 = ys2 + 50;
        circle(xs2, ys2, 5);
        setfillstyle(SOLID_FILL, LIGHTMAGENTA);
        floodfill(xs2, ys2, WHITE);
    }
void pol2(float xs2, float ys2){
        xs2 = xs2 - 20;
        ys2 = ys2 + 50;
        circle(xs2, ys2, 5);
        setfillstyle(SOLID_FILL, RED);
        floodfill(xs2, ys2, WHITE);
    }
void pol3(float xs2, float ys2){
        xs2 = xs2 - 20;
        ys2 = ys2 + 50;
        circle(xs2, ys2, 5);
        setfillstyle(SOLID_FILL, CYAN);
        floodfill(xs2, ys2, WHITE);
    }
void pol4(float xs2, float ys2){
        xs2 = xs2 - 20;
        ys2 = ys2 + 50;
        circle(xs2, ys2, 5);
        setfillstyle(SOLID_FILL, LIGHTRED);
        floodfill(xs2, ys2, WHITE);
    }
void pol5(float xs2, float ys2){
        xs2 = xs2 - 20;
        ys2 = ys2 + 50;
        circle(xs2, ys2, 5);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(xs2, ys2, WHITE);
    }

void bird(float xd, float yd){
    xd = xd-1225;
    yd = yd-85;
    line(1200+xd,20+yd,1201.07226+xd,23.90298+yd);
    line(1201.07226+xd,23.90298+yd,1204.30055+xd,30.59578+yd);
    line(1204.30055+xd,30.59578+yd,1206.73077+xd,38.4036+yd);
    line(1206.73077+xd,38.4036+yd,1207.22657+xd,45.46872+yd);
    line(1207.22657+xd,45.46872+yd,1206.90387+xd,50.60158+yd);
    line(1206.90387+xd,50.60158+yd,1206+xd,56+yd);
    line(1206+xd,56+yd,1205.8015+xd,61.7211+yd);
    line(1205.8015+xd,61.7211+yd,1205.84943+xd,64.26133+yd);
    line(1205.84943+xd,64.26133+yd,1206.56837+xd,66.56192+yd);
    line(1206.56837+xd,66.56192+yd,1208.61692+xd,72.12099+yd);
    line(1208.61692+xd,72.12099+yd,1210.09135+xd,76.89121+yd);
    line(1210.09135+xd,76.89121+yd,1210.30818+xd,79.49315+yd);
    line(1210.30818+xd,79.49315+yd,1209.74443+xd,81.27114+yd);
    line(1209.74443+xd,81.27114+yd,1208.40009+xd,82.26855+yd);
    line(1208.40009+xd,82.26855+yd,1207.14249+xd,82.61547+yd);
    line(1207.14249+xd,82.61547+yd,1205.88489+xd,82.5721+yd);
    line(1205.88489+xd,82.5721+yd,1201.67843+xd,82.35528+yd);
    line(1201.67843+xd,82.35528+yd,1199.77034+xd,82.91903+yd);
    line(1199.77034+xd,82.91903+yd,1198.16581+xd,84.26336+yd);
    line(1198.16581+xd,84.26336+yd,1198+xd,86+yd);
    line(1198+xd,86+yd,1197.17724+xd,87.33521+yd);
    line(1197.17724+xd,87.33521+yd,1195.33445+xd,89.78504+yd);
    line(1195.33445+xd,89.78504+yd,1195.20437+xd,91.04247+yd);
    line(1195.20437+xd,91.04247+yd,1195.94149+xd,91.32431+yd);
    line(1195.94149+xd,91.32431+yd,1198.13881+xd,90.47951+yd);
    line(1198.13881+xd,90.47951+yd,1199.13433+xd,90.17225+yd);
    line(1199.13433+xd,90.17225+yd,1200.33878+xd,90.14767+yd);
    line(1200.33878+xd,90.14767+yd,1202.38368+xd,90.28115+yd);
    line(1202.38368+xd,90.28115+yd,1204.08404+xd,90.69822+yd);
    line(1204.08404+xd,90.69822+yd,1206.93937+xd,92.25421+yd);
    line(1206.93937+xd,92.25421+yd,1209.23326+xd,95.04538+yd);
    line(1209.23326+xd,95.04538+yd,1209.77866+xd,96.50512+yd);
    line(1209.77866+xd,96.50512+yd,1210+xd,98+yd);
    line(1210+xd,98+yd,1209.91219+xd,101.59558+yd);
    line(1209.91219+xd,101.59558+yd,1209.02553+xd,105.12005+yd);
    line(1209.02553+xd,105.12005+yd,1207.84448+xd,108.59225+yd);
    line(1207.84448+xd,108.59225+yd,1206.60037+xd,111.63075+yd);
    line(1206.60037+xd,111.63075+yd,1206+xd,114+yd);
    line(1206+xd,114+yd,1205.99061+xd,116.62272+yd);
    line(1205.99061+xd,116.62272+yd,1205.89924+xd,119.68624+yd);
    line(1205.89924+xd,119.68624+yd,1207.02898+xd,128.37354+yd);
    line(1207.02898+xd,128.37354+yd,1207.37959+xd,131.72379+yd);
    line(1207.37959+xd,131.72379+yd,1207.11414+xd,134.9232+yd);
    line(1207.11414+xd,134.9232+yd,1206.87219+xd,139.33891+yd);
    line(1206.87219+xd,139.33891+yd,1206.02534+xd,143.45217+yd);
    line(1206.02534+xd,143.45217+yd,1203.27467+xd,150.53598+yd);
    line(1203.27467+xd,150.53598+yd,1199.95197+xd,157.10132+yd);
    line(1199.95197+xd,157.10132+yd,1199.8719+xd,158.62255+yd);
    line(1199.8719+xd,158.62255+yd,1201.19298+xd,158.74265+yd);
    line(1201.19298+xd,158.74265+yd,1204.6758+xd,156.86112+yd);
    line(1204.6758+xd,156.86112+yd,1209.27954+xd,153.25819+yd);
    line(1209.27954+xd,153.25819+yd,1211.08101+xd,155.41995+yd);
    line(1211.08101+xd,155.41995+yd,1220.73361+xd,144.27829+yd);
    line(1220.73361+xd,144.27829+yd,1222.22347+xd,145.33561+yd);
    line(1222.22347+xd,145.33561+yd,1228.37076+xd,132.43445+yd);
    line(1228.37076+xd,132.43445+yd,1229.87036+xd,133.07104+yd);
    line(1229.87036+xd,133.07104+yd,1231.52134+xd,120.15961+yd);
    line(1231.52134+xd,120.15961+yd,1234.71348+xd,115.88904+yd);
    line(1234.71348+xd,115.88904+yd,1236.80693+xd,107.42243+yd);
    line(1236.80693+xd,107.42243+yd,1237.43867+xd,96.73548+yd);
    line(1237.43867+xd,96.73548+yd,1242.0997+xd,96.44416+yd);
    line(1242.0997+xd,96.44416+yd,1246.17468+xd,97.73199+yd);
    line(1246.17468+xd,97.73199+yd,1249.70954+xd,99.73087+yd);
    line(1249.70954+xd,99.73087+yd,1254.7174+xd,103.01969+yd);
    line(1254.7174+xd,103.01969+yd,1249.70954+xd,99.73087+yd);
    line(1249.70954+xd,99.73087+yd,1254.7174+xd,103.01969+yd);
    line(1254.7174+xd,103.01969+yd,1258.50349+xd,104.09829+yd);
    line(1258.50349+xd,104.09829+yd,1259.78019+xd,103.32786+yd);
    line(1259.78019+xd,103.32786+yd,1260.26446+xd,99.45373+yd);
    line(1260.26446+xd,99.45373+yd,1263.34964+xd,95.76408+yd);
    line(1263.34964+xd,95.76408+yd,1263.80959+xd,92.84013+yd);
    line(1263.80959+xd,92.84013+yd,1262.79113+xd,89.1934+yd);
    line(1262.79113+xd,89.1934+yd,1264.00008+xd,84.99219+yd);
    line(1264.00008+xd,84.99219+yd,1260.59542+xd,80.52527+yd);
    line(1260.59542+xd,80.52527+yd,1259.27912+xd,74.80043+yd);
    line(1259.27912+xd,74.80043+yd,1252.195+xd,77.24767+yd);
    line(1252.195+xd,77.24767+yd,1244.44985+xd,81.49486+yd);
    line(1244.44985+xd,81.49486+yd,1237.67468+xd,82.0964+yd);
    line(1237.67468+xd,82.0964+yd,1236.37664+xd,79.5003+yd);
    line(1236.37664+xd,79.5003+yd,1236.4083+xd,75.85944+yd);
    line(1236.4083+xd,75.85944+yd,1236.88319+xd,71.64871+yd);
    line(1236.88319+xd,71.64871+yd,1236.44902+xd,68.28803+yd);
    line(1236.44902+xd,68.28803+yd,1235.37024+xd,64.66889+yd);
    line(1235.37024+xd,64.66889+yd,1233.49107+xd,61.18896+yd);
    line(1233.49107+xd,61.18896+yd,1231.12471+xd,57.77862+yd);
    line(1231.12471+xd,57.77862+yd,1231.26921+xd,51.42905+yd);
    line(1231.26921+xd,51.42905+yd,1229.8586+xd,45.43397+yd);
    line(1229.8586+xd,45.43397+yd,1228.35984+xd,45.83071+yd);
    line(1228.35984+xd,45.83071+yd,1222.34717+xd,33.31049+yd);
    line(1222.34717+xd,33.31049+yd,1220.67411+xd,34.09125+yd);
    line(1220.67411+xd,34.09125+yd,1216.64934+xd,28.05056+yd);
    line(1216.64934+xd,28.05056+yd,1210.82531+xd,23.30398+yd);
    line(1210.82531+xd,23.30398+yd,1209.54403+xd,25.10943+yd);
    line(1209.54403+xd,25.10943+yd,1200+xd,20+yd);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(1225+xd,85+yd,WHITE);

}

void life(int xl, int yl){
ellipse(30+xl,40+yl,0,360,20,15);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(16+xl,39+yl,WHITE);
line(24+xl,26.2747+yl,24+xl,53.2747+yl);
setfillstyle(SOLID_FILL,BLACK);
floodfill(30+xl,40+yl,WHITE);
line(36+xl,26.39727+yl,36+xl,53.39727+yl);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(42+xl,40+yl,WHITE);
ellipse(25+xl,24+yl,-15,202,5,13);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(25+xl,24+yl,WHITE);
ellipse(35+xl,24+yl,-17,193,5,13);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(35+xl,24+yl,WHITE);
}
void howtoplay2(){

int page=0;
cleardevice();
float xmouse, ymouse;

 clearmouseclick(WM_LBUTTONDOWN);
 while(1){


        xmouse=mousex();
        ymouse=mousey();

        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        background();
        rectangle(200,200,1200,700);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(600,400,WHITE);
        rectangle(160,160,1240,740);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(163,163,WHITE);
        circle(700,50,30);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(700,30,WHITE);
        ellipse(700,50,0,360,30,5);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(700,50,WHITE);
        line(200,160,670,50);
        line(1200,160,730,50);
        settextstyle(SCRIPT_FONT,0,5);
        outtextxy(470, 280, "Avoid bee eating birds");
        bird(700,500);
        settextstyle(SCRIPT_FONT,0,3);
        outtextxy(1140+15, 670, "ok!");



        if((xmouse>1145)&&(ymouse>670)&&(xmouse<1193)&&(ymouse<700)){
        if(ismouseclick(WM_LBUTTONDOWN)){
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
        }


        page = 1-page;
        delay(10);
 }
}



void howtoplay(){

int page=0;
cleardevice();
float xmouse, ymouse;

 clearmouseclick(WM_LBUTTONDOWN);
 while(1){


        xmouse=mousex();
        ymouse=mousey();

        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        background();
        rectangle(200,200,1200,700);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(600,400,WHITE);
        rectangle(160,160,1240,740);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(163,163,WHITE);
        circle(700,50,30);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(700,30,WHITE);
        ellipse(700,50,0,360,30,5);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(700,50,WHITE);
        line(200,160,670,50);
        line(1200,160,730,50);
        settextstyle(SCRIPT_FONT,0,5);
        outtextxy(220,210,"Bring pollen from flower to the corresponding");
        outtextxy(220,260,"bud in terms of colour using your mouse");
        flower3(400,400);
        bud3(1000,400);
        bee(700,550);
        pol3(700,550);
        line(500,400,900,400);
        ellipse(880,400,-90,90,40,15);
        settextstyle(SCRIPT_FONT,0,3);
        outtextxy(1140+5, 670, "next");
        //rectangle(1145,670,1193,700);

        if((xmouse>1145)&&(ymouse>670)&&(xmouse<1193)&&(ymouse<700)){
        if(ismouseclick(WM_LBUTTONDOWN)){
            cleardevice();
            howtoplay2();
            clearmouseclick(WM_LBUTTONDOWN);
            break;
        }
        }

        page = 1-page;
        delay(10);
 }
}
void gameover(){
    clearmouseclick(WM_LBUTTONDOWN);
    float xmouse, ymouse;
    int page=0;


    while(1){

        xmouse=mousex();
        ymouse=mousey();
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        background();
        rectangle(200,200,1200,700);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(600,400,WHITE);
        rectangle(160,160,1240,740);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(163,163,WHITE);
        circle(700,50,30);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(700,30,WHITE);
        ellipse(700,50,0,360,30,5);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(700,50,WHITE);
        line(200,160,670,50);
        line(1200,160,730,50);

        setcolor(WHITE);
        settextstyle(SCRIPT_FONT,0,7);
        outtextxy(570,350,"your score");
        settextstyle(SCRIPT_FONT,0,30);
        outtextxy(570,450,scorek);
        sprintf(scorek,"%.f",scoref);
        settextstyle(SCRIPT_FONT,0,3);
        outtextxy(1145,670,"back");

       if((xmouse>200)&&(ymouse>200)&&(xmouse<1200)&&(ymouse<700)){
           if(ismouseclick(WM_LBUTTONDOWN)){
            scoref=0;
            cleardevice();
            mainmenu();
            clearmouseclick(WM_LBUTTONDOWN);
            break;



           }
       }

       page = 1-page;
       delay(10);
    }
}

void game(){
    float a,b;
    float xb1[5], yb1[5], xb2[5], yb2[5], xb3[5], yb3[5], xb4[5], yb4[5], xb5[5], yb5[5], xf1[5], yf1[5], xf2[5], yf2[5],xf3[5], yf3[5],xf4[5], yf4[5],xf5[5], yf5[5], xd[5], yd[5], dx[5], xd1[5], yd1[5], dx1[5], dy1[5], xd2[5], yd2[5], dx2[5], dy2[5];
    int page = 0;
    int flagfleur5=1, flagfleur4=1, flagfleur3=1, flagfleur2=1, flagfleur1=1, flagbee=0, pailin5=0, pailin4=0, pailin3=0, pailin2=0, pailin1=0, pailinflag5=0, pailinflag4=0, pailinflag3=0, pailinflag2=0, pailinflag1=0;
    int value=3, v1=0,v2=0,v3=0;
    sndPlaySound("learningtofly.wav",SND_ASYNC|SND_LOOP);

    //bud
    for(int i=0; i<5; i++){
    xb1[i]=rand()%1400;
    yb1[i]=rand()%800;
    //dy[i]=rand()%5+1;
    }
     for(int i=0; i<5; i++){
    xb2[i]=rand()%1400;
    yb2[i]=rand()%800;
    //dy[i]=rand()%5+1;
    }
     for(int i=0; i<5; i++){
    xb3[i]=rand()%1400;
    yb3[i]=rand()%800;
    //dy[i]=rand()%5+1;
    }
     for(int i=0; i<5; i++){
    xb4[i]=rand()%1400;
    yb4[i]=rand()%800;
    //dy[i]=rand()%5+1;
    }
     for(int i=0; i<5; i++){
    xb5[i]=rand()%1400;
    yb5[i]=rand()%800;
    //dy[i]=rand()%5+1;
    }

    //fleur
        for(int i=0; i<1; i++){
        xf1[i]=rand()%1400;
        yf1[i]=rand()%800;
    }
        for(int i=0; i<1; i++){
        xf2[i]=rand()%1400;
        yf2[i]=rand()%800;
    }
        for(int i=0; i<1; i++){
        xf3[i]=rand()%1400;
        yf3[i]=rand()%800;
    }
        for(int i=0; i<1; i++){
        xf4[i]=rand()%1400;
        yf4[i]=rand()%800;
    }
        for(int i=0; i<1; i++){
        xf5[i]=rand()%1400;
        yf5[i]=rand()%800;
    }

    //bird
    for(int i=0; i<1; i++){
        xd[i]=rand()%1400;
        yd[i]=rand()%800;
        dx[i]=rand()%5+5;
    }
    for(int i=0; i<1; i++){
        xd1[i]=rand()%1400;
        yd1[i]=rand()%800;
        dx1[i]=rand()%5+5;
        dy1[i]=rand()%5+2;
    }
    for(int i=0; i<1; i++){
        xd2[i]=rand()%1400;
        yd2[i]=rand()%800;
        dx2[i]=rand()%5+5;
        dy2[i]=rand()%5+2;
    }


    while(1){
        a = mousex();
        b = mousey();
        //score
        setcolor(WHITE);
        settextstyle(SANS_SERIF_FONT, 0, 2);
        outtextxy(1290,10,score);
        sprintf(score, "score = %.f", scoref);

        setactivepage(page);
        setvisualpage(1-page);

        cleardevice();
        background();
        bee(a, b);

//bud
            for(int i=0; i<1; i++){
            yb1[i]=yb1[i]-1;
            if(yb1[i] == 0){
                yb1[i]=800;
                xb1[i]=rand()%1400;
                pailinflag5=0;
                d5=0;
            }
            if((a>xb1[i]-10)&&(a<xb1[i]+10)&&(b>yb1[i]-10)&&(b<yb1[i]+10)){
                if((pailin5==1)&&(flagfleur5==0)&&(flagbee==1)){

                    pailinflag5=1;
                    pailin5=0;
                    flagbee=0;


                }
            }
            if(pailinflag5==0){
                bud1(xb1[i],yb1[i]);
            }
            if(pailinflag5==1){
                flower5(xb1[i],yb1[i]);
                flagfleur5=1;
                d5+=1;
                if(d5<=1){
                    scoref+=1;
                }
            }

        }

            for(int i=0; i<1; i++){
            yb2[i]=yb2[i]-1;
            if(yb2[i] == 0){
                yb2[i]=800;
                xb2[i]=rand()%1400;
                pailinflag4=0;
                d4=0;
            }
            if((a>xb2[i]-10)&&(a<xb2[i]+10)&&(b>yb2[i]-10)&&(b<yb2[i]+10)){
                if((pailin4==1)&&(flagfleur4==0)&&(flagbee==1)){

                    pailinflag4=1;
                    pailin4=0;
                    flagbee=0;
                }
            }
            if(pailinflag4==0){
                bud2(xb2[i],yb2[i]);
            }
            if(pailinflag4==1){
                flower4(xb2[i],yb2[i]);
                flagfleur4=1;
                d4+=1;
                if(d4<=1){
                    scoref+=1;
                }
            }

        }
            for(int i=0; i<1; i++){
            yb3[i]=yb3[i]-1;
            if(yb3[i] == 0){
                yb3[i]=800;
                xb3[i]=rand()%1400;
                pailinflag3=0;
                d3=0;
            }
            if((a>xb3[i]-10)&&(a<xb3[i]+10)&&(b>yb3[i]-10)&&(b<yb3[i]+10)){
                if((pailin3==1)&&(flagfleur3==0)&&(flagbee==1)){

                    pailinflag3=1;
                    pailin3=0;
                    flagbee=0;
                }
            }
            if(pailinflag3==0){
                bud3(xb3[i],yb3[i]);
            }
            if(pailinflag3==1){
                flower3(xb3[i],yb3[i]);
                flagfleur3=1;
                d3+=1;
                if(d3<=1){
                    scoref+=1;
                }
            }

        }

            for(int i=0; i<1; i++){
            yb4[i]=yb4[i]-1;
            if(yb4[i] == 0){
                yb4[i]=800;
                xb4[i]=rand()%1400;
                pailinflag2=0;
                d2=0;
            }
            if((a>xb4[i]-10)&&(a<xb4[i]+10)&&(b>yb4[i]-10)&&(b<yb4[i]+10)){
                if((pailin2==1)&&(flagfleur2==0)&&(flagbee==1)){

                    pailinflag2=1;
                    pailin2=0;
                    flagbee=0;
                }
            }
            if(pailinflag2==0){
                bud4(xb4[i],yb4[i]);
            }
            if(pailinflag2==1){
                flower2(xb4[i],yb4[i]);
                flagfleur2=1;
                d2+=1;
                if(d2<=1){
                    scoref+=1;
                }
            }

        }
            for(int i=0; i<1; i++){
            yb5[i]=yb5[i]-1;
            if(yb5[i] == 0){
                yb5[i]=800;
                xb5[i]=rand()%1400;
                pailinflag1=0;
                d1=0;
                //boleh1=1;
            }
            if((a>xb5[i]-10)&&(a<xb5[i]+10)&&(b>yb5[i]-10)&&(b<yb5[i]+10)){
                if((pailin1==1)&&(flagfleur1==0)&&(flagbee==1)){

                    pailinflag1=1;
                    pailin1=0;
                    flagbee=0;
                }
            }
            if(pailinflag1==0){
                bud5(xb5[i],yb5[i]);
            }
            if(pailinflag1==1){
                flower1(xb5[i],yb5[i]);
                flagfleur1=1;
                d1+=1;
                if(d1<=1){
                    scoref+=1;
                }

            }

        }
//fleur
            for(int i=0; i<1; i++){
            yf1[i]=yf1[i]-1;
            if((a>xf1[i]-12)&&(a<xf1[i]+12)&&(b>yf1[i]-14)&&(b<yf1[i]+14)){
               if((flagfleur1 == 1) && (flagbee==0)){
                    pailin1=1;
                    flagbee = 1;
                    flagfleur1 = 0;
                    }
               }
            if(yf1[i] == -50){
                yf1[i]=800;
                xf1[i]=rand()%1400;
            }
            flower1(xf1[i],yf1[i]);
        }
            for(int i=0; i<1; i++){
            yf2[i]=yf2[i]-1;
            if((a>xf2[i]-12)&&(a<xf2[i]+12)&&(b>yf2[i]-14)&&(b<yf2[i]+14)){
               if((flagfleur2 == 1) && (flagbee==0)){
                    pailin2=1;
                    flagbee = 1;
                    flagfleur2 = 0;
                    }
               }
            if(yf2[i] == -50){
                yf2[i]=800;
                xf2[i]=rand()%1400;
            }
            flower2(xf2[i],yf2[i]);
        }
            for(int i=0; i<1; i++){
            yf3[i]=yf3[i]-1;
            if((a>xf3[i]-12)&&(a<xf3[i]+12)&&(b>yf3[i]-14)&&(b<yf3[i]+14)){
               if((flagfleur3 == 1) && (flagbee==0)){
                    pailin3 = 1;
                    flagbee = 1;
                    flagfleur3 = 0;
                    }
               }
            if(yf3[i] == -50){
                yf3[i]=800;
                xf3[i]=rand()%1400;
            }
            flower3(xf3[i],yf3[i]);
        }
            for(int i=0; i<1; i++){
            yf4[i]=yf4[i]-1;
            if((a>xf4[i]-12)&&(a<xf4[i]+12)&&(b>yf4[i]-14)&&(b<yf4[i]+14)){
               if((flagfleur4 == 1) && (flagbee==0)){
                    pailin4 = 1;
                    flagbee = 1;
                    flagfleur4 = 0;
                    }
               }
            if(yf4[i] == -50){
                yf4[i]=800;
                xf4[i]=rand()%1400;
            }
            flower4(xf4[i],yf4[i]);
        }
            for(int i=0; i<1; i++){
            yf5[i]=yf5[i]-1;
            if((a>xf5[i]-12)&&(a<xf5[i]+12)&&(b>yf5[i]-14)&&(b<yf5[i]+14)){
               if((flagfleur5 == 1) && (flagbee==0)){
                    pailin5=1;
                    flagbee = 1;
                    flagfleur5 = 0;
                    }
               }
            if(yf5[i] == -50){
                yf5[i]=800;
                xf5[i]=rand()%1400;
            }
            flower5(xf5[i],yf5[i]);
        }

        if(pailin5==1){
            pol5(a,b);
        }
        if(pailin4==1){
            pol4(a,b);
        }
        if(pailin3==1){
            pol3(a,b);
        }
        if(pailin2==1){
            pol2(a,b);
        }
        if(pailin1==1){
            pol1(a,b);
        }

//bird
            for (int i=0;i<1;i++)
        {
            xd[i]=xd[i]-dx[i];
            if(xd[i]<0)
                {
                    yd[i]=rand()%800;
                    xd[i]=1400;
                    v1=0;
                }
            if((a>xd[i]-25)&&(b>yd[i]-65)&&(a<xd[i]+15)&&(b<yd[i]+75)){
                v1+=1;
                if(v1<=1){
                    value-=1;
                }
            }
            bird(xd[i],yd[i]);
        }
            for (int i=0;i<1;i++)
        {
            xd1[i]=xd1[i]-dx1[i];
            yd1[i]=yd1[i]-dy1[i];
            if(xd1[i]<-10)
                {
                    yd1[i]=rand()%800;
                    xd1[i]=1400;
                    v2=0;
                }
            if((a>xd1[i]-25)&&(b>yd1[i]-65)&&(a<xd1[i]+15)&&(b<yd1[i]+75)){
                v2+=1;
                if(v2<=1){
                    value-=1;
                }
            }
            bird(xd1[i],yd1[i]);
        }
            for (int i=0;i<1;i++)
        {
            xd2[i]=xd2[i]-dx2[i];
            yd2[i]=yd2[i]+dy2[i];
            if(xd2[i]<-15)
                {
                    yd2[i]=rand()%800;
                    xd2[i]=1400;
                    v3=0;
                }
            if((a>xd2[i]-25)&&(b>yd2[i]-65)&&(a<xd2[i]+15)&&(b<yd2[i]+75)){
                v3+=1;
                if(v3<=1){
                    value-=1;
                }
            }
            bird(xd2[i],yd2[i]);
        }

        switch(value){
        case 3: life(0,0); life(45,0); life(90,0); break;
        case 2: life(0,0); life(45,0); break;
        case 1: life(0,0); break;
        }

        if(value<=0){
            cleardevice();
            gameover();

        }
        page=1-page;

    }
}


void mainmenu(){

    float xmouse, ymouse;
    int page=0;
    clearmouseclick(WM_LBUTTONDOWN);
    sndPlaySound("tittlescreen.wav",SND_ASYNC|SND_LOOP);

    while(1){
        xmouse=mousex();
        ymouse=mousey();
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        background();
        rectangle(200,200,1200,700);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(600,400,WHITE);
        rectangle(160,160,1240,740);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(163,163,WHITE);
        circle(700,50,30);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(700,30,WHITE);
        ellipse(700,50,0,360,30,5);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(700,50,WHITE);
        line(200,160,670,50);
        line(1200,160,730,50);

        setcolor(WHITE);
        settextstyle(SCRIPT_FONT,0,10);
        outtextxy(600,210,"Bee");
        settextstyle(SCRIPT_FONT,0,7);
        outtextxy(630,350,"Play");
        outtextxy(530,450,"How to play");
        outtextxy(630,560,"quit");

        if((xmouse>630)&&(ymouse>350)&&(xmouse<630+147)&&(ymouse<350+70)){
            if(ismouseclick(WM_LBUTTONDOWN)){
                cleardevice();
                game();
                clearmouseclick(WM_LBUTTONDOWN);
                break;
            }
        }
        if((xmouse>530)&&(ymouse>450)&&(xmouse<530+367)&&(ymouse<450+70)){
            if(ismouseclick(WM_LBUTTONDOWN)){
                cleardevice();
                howtoplay();
                clearmouseclick(WM_LBUTTONDOWN);
                break;
            }
        }
        if((xmouse>610)&&(ymouse>560)&&(xmouse<610+147)&&(ymouse<560+70)){
            if(ismouseclick(WM_LBUTTONDOWN)){
                closegraph();
                exit(0);
                clearmouseclick(WM_LBUTTONDOWN);
                break;
            }
        }
        page=1-page;

    }
}


int main()
{
    initwindow(1400,800);
    mainmenu();

    return 0;
}

