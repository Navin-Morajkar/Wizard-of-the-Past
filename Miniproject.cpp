#include <simplecpp>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int flag = 0;
int mcx, mcy;

int e1x, e1y, e2x, e2y, e3x, e3y, e4x, e4y;

int bx, by;
int ehealth = 2;

int titlescreen()
{

    initCanvas("The Wizard of the Past", 1000, 700);

    Text title(500, 200, "The Wizard of the Past");
    title.scale(1000);

    Rectangle r(500, 300, 100, 40);
    r.setColor(COLOR("black"));
    r.setFill();

    Text T(500, 300, "PLAY");

    Rectangle b1(500, 400, 100, 40);
    b1.setColor(COLOR("black"));
    b1.setFill();

    Text T1(500, 400, "EXIT");
    Text T2(500, 600, "Developed by: Aryan Kotru  \nGauravi Kamat\n  Navin Morajkar\n  Nitya Pai");

    while (1)
    {

        int zk = getClick();
        int x = zk / 65536;
        int y = zk % 65536;
        // cout<<"x="<<x<<" y="<<y;

        if (x >= 450 && x <= 549 && y >= 280 && y <= 317)
        {

            title.hide();
            r.hide();
            b1.hide();
            T1.hide();
            T.hide();
            goto start;
        }

        else if (x >= 450 && x <= 550 && y >= 381 && y <= 419)
        {

            exit(1);
        }

        else
        {

            cout << " ";
        }
    }

    wait(5);

start:

    Text t0(480, 350, "----INSTRUCTIONS----");
    t0.setColor(RED);
    Text t1(500, 290, "Press d/D to MOVE RIGHT");
    Text t2(500, 310, "Press a/A to MOVE LEFT");
    Text t3(500, 330, "Press w/W to MOVE UP");
    Text t4(500, 350, "Press s/S to MOVE DOWN");
    Text t5(500, 370, "Press e/E to JUMP");
    Text t6(500, 390, "Press f/F to CAST A SPELL");

    wait(4);
    t0.moveTo(80, 20);
    wait(1);
    t1.moveTo(85, 40);
    wait(1);
    t2.moveTo(80, 60);
    wait(1);
    t3.moveTo(76, 80);
    wait(1);
    t4.moveTo(85, 100);
    wait(1);
    t5.moveTo(60, 120);
    wait(1);
    t6.moveTo(85, 140);
    wait(2);

    beginFrame();
    Rectangle r1(0, 0, 2000, 2000);
    r1.setColor(COLOR(137, 207, 240));
    r1.setFill();
    Rectangle r22(250, 200, 290, 290);
    r22.moveTo(320, 460);
    r22.setColor(COLOR(165, 42, 42));
    r22.setFill();
    r22.rotate(40);
    Rectangle r23(250, 200, 290, 290);
    r23.moveTo(520, 460);
    r23.setColor(COLOR(0, 0, 0));
    r23.setFill();
    r23.rotate(40);
    Rectangle r24(250, 200, 290, 290);
    r24.moveTo(720, 460);
    r24.setColor(COLOR(165, 42, 42));
    r24.setFill();
    r24.rotate(40);
    Rectangle r25(250, 200, 290, 290);
    r25.moveTo(100, 460);
    r25.setColor(COLOR(0, 0, 0));
    r25.setFill();
    r25.rotate(40);
    Rectangle r26(250, 200, 290, 290);
    r26.moveTo(970, 460);
    r26.setColor(COLOR(0, 0, 0));
    r26.setFill();
    r26.rotate(40);

    Rectangle r2(550, 500, 2000, 400);
    r2.moveTo(300, 650);
    r2.setColor(COLOR(0, 128, 0));
    r2.setFill();
    Circle c3(250, 200, 60);
    c3.moveTo(400, 150);
    c3.setColor(COLOR(250, 250, 0));
    c3.setFill();
    Rectangle r4(250, 200, 10, 50);
    r4.moveTo(400, 220);
    r4.setColor(COLOR(250, 250, 0));
    r4.setFill();
    Rectangle r5(250, 200, 10, 50);
    r5.moveTo(410, 80);
    r5.setColor(COLOR(250, 250, 0));
    r5.setFill();
    Rectangle r6(250, 200, 10, 50);
    r6.moveTo(330, 180);
    r6.setColor(COLOR(250, 250, 0));
    r6.setFill();
    r6.rotate(45);
    Rectangle r7(250, 200, 10, 50);
    r7.moveTo(470, 109);
    r7.setColor(COLOR(250, 250, 0));
    r7.setFill();
    r7.rotate(45);
    Rectangle r8(250, 200, 10, 50);
    r8.moveTo(470, 198);
    r8.setColor(COLOR(250, 250, 0));
    r8.setFill();
    r8.rotate(90);
    Rectangle r9(250, 200, 10, 50);
    r9.moveTo(330, 108);
    r9.setColor(COLOR(250, 250, 0));
    r9.setFill();
    r9.rotate(90);
    Rectangle r10(250, 200, 5, 30);
    r10.moveTo(630, 108);
    r10.setColor(COLOR(0, 0, 0));
    r10.setFill();
    r10.rotate(90);
    Rectangle r11(250, 200, 5, 30);
    r11.moveTo(650, 108);
    r11.setColor(COLOR(0, 0, 0));
    r11.setFill();
    r11.rotate(45);
    Rectangle r12(250, 200, 5, 30);
    r12.moveTo(230, 108);
    r12.setColor(COLOR(0, 0, 0));
    r12.setFill();
    r12.rotate(90);
    Rectangle r13(250, 200, 5, 30);
    r13.moveTo(250, 108);
    r13.setColor(COLOR(0, 0, 0));
    r13.setFill();
    r13.rotate(45);
    Rectangle r14(250, 200, 5, 30);
    r14.moveTo(130, 258);
    r14.setColor(COLOR(0, 0, 0));
    r14.setFill();
    r14.rotate(90);
    Rectangle r15(250, 200, 5, 30);
    r15.moveTo(150, 258);
    r15.setColor(COLOR(0, 0, 0));
    r15.setFill();
    r15.rotate(45);
    Rectangle r16(250, 200, 5, 30);
    r16.moveTo(730, 258);
    r16.setColor(COLOR(0, 0, 0));
    r16.setFill();
    r16.rotate(90);
    Rectangle r17(250, 200, 5, 30);
    r17.moveTo(750, 258);
    r17.setColor(COLOR(0, 0, 0));
    r17.setFill();
    r17.rotate(45);
    Rectangle r18(250, 200, 5, 30);
    r18.moveTo(830, 80);
    r18.setColor(COLOR(0, 0, 0));
    r18.setFill();
    r18.rotate(90);
    Rectangle r19(250, 200, 5, 30);
    r19.moveTo(850, 80);
    r19.setColor(COLOR(0, 0, 0));
    r19.setFill();
    r19.rotate(45);
    Rectangle r20(250, 200, 5, 30);
    r20.moveTo(100, 90);
    r20.setColor(COLOR(0, 0, 0));
    r20.setFill();
    r20.rotate(90);
    Rectangle r21(250, 200, 5, 30);
    r21.moveTo(120, 90);
    r21.setColor(COLOR(0, 0, 0));
    r21.setFill();
    r21.rotate(45);

    t0.moveTo(80, 20);
    wait(1);
    t1.moveTo(85, 40);
    wait(1);
    t2.moveTo(80, 60);
    wait(1);
    t3.moveTo(76, 80);
    wait(1);
    t4.moveTo(85, 100);
    wait(1);
    t5.moveTo(60, 120);
    wait(1);
    t6.moveTo(85, 140);

    // main character
    // Wizard
    // hand

    beginFrame();
    Rectangle wizardhand(100, 170, 24, 12);
    wizardhand.rotate(210);
    wizardhand.setColor(COLOR(128, 0, 128));
    wizardhand.setFill();

    // dress
    double h[17][2] = {{225, 225}, {150, 250}, {160, 270}, {180, 260}, {125, 400}, {153, 370}, {181, 400}, {209, 370}, {237, 400}, {265, 370}, {293, 400}, {315, 370}, {325, 400}, {270, 260}, {320, 270}, {330, 250}, {225, 225}};
    Polygon d(0, 7, h, 10);
    d.setColor(COLOR(190, 0, 128));
    d.setFill();
    d.scale(0.6);

    // face
    Circle wizardface(133, 133, 18);
    wizardface.setColor(COLOR(232, 190, 172));
    wizardface.setFill();

    // eyes
    Circle e3(128, 130, 4);
    e3.setColor(COLOR("white"));
    e3.setFill();

    Circle e2(142, 130, 4);
    e2.setColor(COLOR("white"));
    e2.setFill();

    Circle e4(130, 132, 2);
    e4.setColor(COLOR("black"));
    e4.setFill();

    Circle e5(144, 132, 2);
    e5.setColor(COLOR("black"));
    e5.setFill();

    // Hat
    double a[4][2] = {{116, 122}, {150, 122}, {104, 68}, {116, 122}};
    Polygon p(0, 0, a, 4);
    p.setColor(COLOR(128, 0, 128));
    p.setFill();

    // star
    double z[6][2] = {{110, 100}, {190, 100}, {125, 150}, {150, 65}, {175, 150}, {110, 100}};
    Polygon s(0, 0, z, 6);
    s.setColor(COLOR("yellow"));
    s.setFill();
    s.scale(0.18);
    s.moveTo(106, 143);

    Polygon s1(0, 0, z, 6);
    s1.setColor(COLOR("yellow"));
    s1.setFill();
    s1.scale(0.18);
    s1.moveTo(88, 160);

    Polygon s2(0, 0, z, 6);
    s2.setColor(COLOR("yellow"));
    s2.setFill();
    s2.scale(0.18);
    s2.moveTo(111, 206);

    Polygon s3(0, 0, z, 6);
    s3.setColor(COLOR("yellow"));
    s3.setFill();
    s3.scale(0.18);
    s3.moveTo(85, 206);

    Polygon s4(0, 0, z, 6);
    s4.setColor(COLOR("yellow"));
    s4.setFill();
    s4.scale(0.18);
    s4.moveTo(110, 175);

    Polygon s5(0, 0, z, 6);
    s5.setColor(COLOR("yellow"));
    s5.setFill();
    s5.scale(0.18);
    s5.moveTo(80, 185);

    wizardhand.move(0, 300);
    wizardface.move(0, 300);
    d.move(0, 300);
    e2.move(0, 300);
    e3.move(0, 300);
    e4.move(0, 300);
    e5.move(0, 300);
    p.move(0, 300);
    s.move(0, 300);
    s1.move(0, 300);
    s2.move(0, 300);
    s3.move(0, 300);
    s4.move(0, 300);
    s5.move(0, 300);

    endFrame();

    Text t8(500, 330, "Back in an era, when industry was a thing of imagination, there");
    getch();
    Text t9(500, 350, "lived a magical wizard. One day, when all was well, the world experienced");
    getch();
    Text t10(500, 370, "a terrible disturbance. The very fabric of reality seemed to rip apart, creating");
    getch();
    Text t11(500, 390, "a portal through which the Wizard was sucked in.");
    getch();
}

int level1()
{

    // Level 1

    beginFrame();
    Rectangle r1(0, 0, 2000, 2000);
    r1.setColor(COLOR(137, 207, 240));
    r1.setFill();
    Rectangle r22(250, 200, 290, 290);
    r22.moveTo(320, 460);
    r22.setColor(COLOR(165, 42, 42));
    r22.setFill();
    r22.rotate(40);
    Rectangle r23(250, 200, 290, 290);
    r23.moveTo(520, 460);
    r23.setColor(COLOR(0, 0, 0));
    r23.setFill();
    r23.rotate(40);
    Rectangle r24(250, 200, 290, 290);
    r24.moveTo(720, 460);
    r24.setColor(COLOR(165, 42, 42));
    r24.setFill();
    r24.rotate(40);
    Rectangle r25(250, 200, 290, 290);
    r25.moveTo(100, 460);
    r25.setColor(COLOR(0, 0, 0));
    r25.setFill();
    r25.rotate(40);
    Rectangle r26(250, 200, 290, 290);
    r26.moveTo(970, 460);
    r26.setColor(COLOR(0, 0, 0));
    r26.setFill();
    r26.rotate(40);

    Rectangle r2(550, 500, 2000, 400);
    r2.moveTo(300, 650);
    r2.setColor(COLOR(0, 128, 0));
    r2.setFill();
    Circle c3(250, 200, 60);
    c3.moveTo(400, 150);
    c3.setColor(COLOR(250, 250, 0));
    c3.setFill();
    Rectangle r4(250, 200, 10, 50);
    r4.moveTo(400, 220);
    r4.setColor(COLOR(250, 250, 0));
    r4.setFill();
    Rectangle r5(250, 200, 10, 50);
    r5.moveTo(410, 80);
    r5.setColor(COLOR(250, 250, 0));
    r5.setFill();
    Rectangle r6(250, 200, 10, 50);
    r6.moveTo(330, 180);
    r6.setColor(COLOR(250, 250, 0));
    r6.setFill();
    r6.rotate(45);
    Rectangle r7(250, 200, 10, 50);
    r7.moveTo(470, 109);
    r7.setColor(COLOR(250, 250, 0));
    r7.setFill();
    r7.rotate(45);
    Rectangle r8(250, 200, 10, 50);
    r8.moveTo(470, 198);
    r8.setColor(COLOR(250, 250, 0));
    r8.setFill();
    r8.rotate(90);
    Rectangle r9(250, 200, 10, 50);
    r9.moveTo(330, 108);
    r9.setColor(COLOR(250, 250, 0));
    r9.setFill();
    r9.rotate(90);
    Rectangle r10(250, 200, 5, 30);
    r10.moveTo(630, 108);
    r10.setColor(COLOR(0, 0, 0));
    r10.setFill();
    r10.rotate(90);
    Rectangle r11(250, 200, 5, 30);
    r11.moveTo(650, 108);
    r11.setColor(COLOR(0, 0, 0));
    r11.setFill();
    r11.rotate(45);
    Rectangle r12(250, 200, 5, 30);
    r12.moveTo(230, 108);
    r12.setColor(COLOR(0, 0, 0));
    r12.setFill();
    r12.rotate(90);
    Rectangle r13(250, 200, 5, 30);
    r13.moveTo(250, 108);
    r13.setColor(COLOR(0, 0, 0));
    r13.setFill();
    r13.rotate(45);
    Rectangle r14(250, 200, 5, 30);
    r14.moveTo(130, 258);
    r14.setColor(COLOR(0, 0, 0));
    r14.setFill();
    r14.rotate(90);
    Rectangle r15(250, 200, 5, 30);
    r15.moveTo(150, 258);
    r15.setColor(COLOR(0, 0, 0));
    r15.setFill();
    r15.rotate(45);
    Rectangle r16(250, 200, 5, 30);
    r16.moveTo(730, 258);
    r16.setColor(COLOR(0, 0, 0));
    r16.setFill();
    r16.rotate(90);
    Rectangle r17(250, 200, 5, 30);
    r17.moveTo(750, 258);
    r17.setColor(COLOR(0, 0, 0));
    r17.setFill();
    r17.rotate(45);
    Rectangle r18(250, 200, 5, 30);
    r18.moveTo(830, 80);
    r18.setColor(COLOR(0, 0, 0));
    r18.setFill();
    r18.rotate(90);
    Rectangle r19(250, 200, 5, 30);
    r19.moveTo(850, 80);
    r19.setColor(COLOR(0, 0, 0));
    r19.setFill();
    r19.rotate(45);
    Rectangle r20(250, 200, 5, 30);
    r20.moveTo(100, 90);
    r20.setColor(COLOR(0, 0, 0));
    r20.setFill();
    r20.rotate(90);
    Rectangle r21(250, 200, 5, 30);
    r21.moveTo(120, 90);
    r21.setColor(COLOR(0, 0, 0));
    r21.setFill();
    r21.rotate(45);

    endFrame();

    Text t8(500, 300, "Unsure at first, the Wizard quickly used his magical powers to figure out that");
    getch();
    Text t9(500, 320, "someone had fiddled with the stability of space-time to try and time travel.");
    getch();
    Text t10(500, 340, "Having studied magic all his life, the Wizard knew that this could be extremely dangerous");
    getch();
    Text t11(500, 360, "if done wrongly and hence, he set out to stop whomever was responsible. ");
    getch();

    t8.hide();
    t9.hide();
    t10.hide();
    t11.hide();

    // main character
    // Wizard
    // hand

    beginFrame();
    Rectangle wizardhand(100, 170, 24, 12);
    wizardhand.rotate(210);
    wizardhand.setColor(COLOR(128, 0, 128));
    wizardhand.setFill();
    // wizardhand.moveTo(100, 400);

    // dress
    double h[17][2] = {{225, 225}, {150, 250}, {160, 270}, {180, 260}, {125, 400}, {153, 370}, {181, 400}, {209, 370}, {237, 400}, {265, 370}, {293, 400}, {315, 370}, {325, 400}, {270, 260}, {320, 270}, {330, 250}, {225, 225}};
    Polygon d(0, 7, h, 10);
    d.setColor(COLOR(190, 0, 128));
    d.setFill();
    d.scale(0.6);

    // face
    Circle wizardface(133, 133, 18);
    wizardface.setColor(COLOR(232, 190, 172));
    wizardface.setFill();

    // eyes
    Circle e3(128, 130, 4);
    e3.setColor(COLOR("white"));
    e3.setFill();

    Circle e2(142, 130, 4);
    e2.setColor(COLOR("white"));
    e2.setFill();

    Circle e4(130, 132, 2);
    e4.setColor(COLOR("black"));
    e4.setFill();

    Circle e5(144, 132, 2);
    e5.setColor(COLOR("black"));
    e5.setFill();

    // Hat
    double a[4][2] = {{116, 122}, {150, 122}, {104, 68}, {116, 122}};
    Polygon p(0, 0, a, 4);
    p.setColor(COLOR(128, 0, 128));
    p.setFill();

    // star
    double z[6][2] = {{110, 100}, {190, 100}, {125, 150}, {150, 65}, {175, 150}, {110, 100}};
    Polygon s(0, 0, z, 6);
    s.setColor(COLOR("yellow"));
    s.setFill();
    s.scale(0.18);
    s.moveTo(106, 143);

    Polygon s1(0, 0, z, 6);
    s1.setColor(COLOR("yellow"));
    s1.setFill();
    s1.scale(0.18);
    s1.moveTo(88, 160);

    Polygon s2(0, 0, z, 6);
    s2.setColor(COLOR("yellow"));
    s2.setFill();
    s2.scale(0.18);
    s2.moveTo(111, 206);

    Polygon s3(0, 0, z, 6);
    s3.setColor(COLOR("yellow"));
    s3.setFill();
    s3.scale(0.18);
    s3.moveTo(85, 206);

    Polygon s4(0, 0, z, 6);
    s4.setColor(COLOR("yellow"));
    s4.setFill();
    s4.scale(0.18);
    s4.moveTo(110, 175);

    Polygon s5(0, 0, z, 6);
    s5.setColor(COLOR("yellow"));
    s5.setFill();
    s5.scale(0.18);
    s5.moveTo(80, 185);

    wizardhand.move(0, 300);
    wizardface.move(0, 300);
    d.move(0, 300);
    e2.move(0, 300);
    e3.move(0, 300);
    e4.move(0, 300);
    e5.move(0, 300);
    p.move(0, 300);
    s.move(0, 300);
    s1.move(0, 300);
    s2.move(0, 300);
    s3.move(0, 300);
    s4.move(0, 300);
    s5.move(0, 300);

    endFrame();

    // projectile

    double effect[15][2] = {{100, 100}, {120, 50}, {130, 100}, {165, 75}, {145, 120}, {190, 140}, {140, 145}, {145, 180}, {120, 148}, {100, 175}, {103, 136}, {70, 130}, {95, 120}, {85, 75}, {100, 100}};
    Polygon pe(0, 0, effect, 15);
    pe.setColor(COLOR("yellow"));
    pe.setFill();
    pe.scale(0.2);
    pe.hide();

    mcx = wizardhand.getX();
    mcy = wizardhand.getY();

    // enemy
    // Generic Enemy

    Rectangle R(700, 420, 70, 70);
    R.setColor(COLOR(242, 140, 40));
    R.setFill();
    Rectangle R2(700, 420, 70, 70);

    // Enemy Body
    Rectangle rab(700, 500, 70, 90);
    Rectangle rabb(700, 500, 70, 90);

    rab.setColor(COLOR(255, 165, 0));
    rab.setFill();

    double face[4][2] = {{155, 175}, {245, 175}, {200, 255}, {155, 175}};
    Polygon enemyface(500, 225, face, 4);
    enemyface.setColor(COLOR(0, 191, 255));
    enemyface.setFill();
    Polygon efb(500, 225, face, 4);
    // enemyface.moveTo(100,100);

    // Eyes
    Circle en(715, 410, 8);
    en.setColor(COLOR("white"));
    en.setFill();

    Circle en2(685, 410, 8);
    en2.setColor(COLOR("white"));
    en2.setFill();

    Circle en3(713, 408, 4);
    en3.setColor(COLOR("red"));
    en3.setFill();

    Circle en4(683, 408, 4);
    en4.setColor(COLOR("red"));
    en4.setFill();

    double teeth[7][2] = {{180, 210}, {220, 210}, {220, 220}, {210, 210}, {190, 210}, {180, 220}, {180, 210}};
    Polygon T(0, 0, teeth, 7);
    T.setColor(COLOR("red"));
    T.moveTo(500, 225);
    T.setFill();

    int e1x = rab.getX();
    int e1y = rab.getY();

    XEvent f;

    mcx = wizardhand.getX();

    while (flag == 0)
    {

        nextEvent(f);

        switch (charFromEvent(f))
        {

        case 27:

            exit(1);

            break;
        // get help with h
        case 104:
        {

            beginFrame();
            Text t0(480, 350, "----INSTRUCTIONS----");
            t0.setColor(RED);
            Text t1(500, 290, "Press d/D to MOVE RIGHT");
            Text t2(500, 310, "Press a/A to MOVE LEFT");
            Text t3(500, 330, "Press w/W to MOVE UP");
            Text t4(500, 350, "Press s/S to MOVE DOWN");
            Text t5(500, 370, "Press e/E to JUMP");
            Text t6(500, 390, "Press f/F to CAST A SPELL");
            endFrame();
            wait(4);
            t0.hide();
            t1.hide();
            t2.hide();
            t3.hide();
            t4.hide();
            t5.hide();
            t6.hide();
        }
        break;

        // get help with H
        case 072:
        {

            beginFrame();
            Text t0a(480, 350, "----INSTRUCTIONS----");
            t0a.setColor(RED);
            Text t1a(500, 290, "Press d/D to MOVE RIGHT");
            Text t2a(500, 310, "Press a/A to MOVE LEFT");
            Text t3a(500, 330, "Press w/W to MOVE UP");
            Text t4a(500, 350, "Press s/S to MOVE DOWN");
            Text t5a(500, 370, "Press e/E to JUMP");
            Text t6a(500, 390, "Press f/F to CAST A SPELL");
            endFrame();

            wait(4);
            beginFrame();
            t0a.hide();
            t1a.hide();
            t2a.hide();
            t3a.hide();
            t4a.hide();
            t5a.hide();
            t6a.hide();
            endFrame();
        }
        break;

        // move up with w
        case 119:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();

            break;

        // move left with a
        case 97:

            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();
            break;

        // move down with s
        case 115:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();
            break;

        // move right with d
        case 100:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();

            break;

        // move up with W
        case 87:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();
            break;

        // move left with A
        case 65:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();

            break;

        // move down with S
        case 83:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();

            break;

        // move right with D
        case 68:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();
            break;

        case 69:
            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 120);
            wizardface.move(0, 120);
            d.move(0, 120);
            e2.move(0, 120);
            e3.move(0, 120);
            e4.move(0, 120);
            e5.move(0, 120);
            p.move(0, 120);
            s.move(0, 120);
            s1.move(0, 120);
            s2.move(0, 120);
            s3.move(0, 120);
            s4.move(0, 120);
            s5.move(0, 120);

            endFrame();
            break;

        // jump with e
        case 101:

            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 50);
            wizardface.move(0, 50);
            d.move(0, 50);
            e2.move(0, 50);
            e3.move(0, 50);
            e4.move(0, 50);
            e5.move(0, 50);
            p.move(0, 50);
            s.move(0, 50);
            s1.move(0, 50);
            s2.move(0, 50);
            s3.move(0, 50);
            s4.move(0, 50);
            s5.move(0, 50);
            endFrame();

            break;

        case 70:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < e1x)
                {
                    pe.move(10, 0);
                }

                else if (by >= 385 && by <= 545)
                {

                    pe.hide();
                    pe.moveTo(0, 0);
                    wait(0.09);
                    Text t10(600, 600, "HIT");

                    rabb.hide();
                    rab.hide();
                    R.hide();
                    R2.hide();
                    enemyface.hide();
                    efb.hide();
                    en.hide();
                    en2.hide();
                    en3.hide();
                    en4.hide();
                    T.hide();

                    wait(0.05);
                    rabb.show();
                    rab.show();

                    Text t8(680, 350, "HIT!");
                    rab.hide();
                    rabb.hide();
                    flag++;
                    cout << "Hi";
                    wait(0.15);
                    t8.hide();
                    wait(0.15);
                    t8.show();
                    wait(0.15);
                    t8.hide();
                }
                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                        break;
                    }
                }
            }
        // shoot with f
        case 102:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < e1x)
                {
                    pe.move(10, 0);
                }

                else if (by >= 385 && by <= 545)
                {

                    pe.hide();
                    pe.moveTo(0, 0);
                    wait(0.09);
                    Text t10(600, 600, "HIT");

                    rabb.hide();
                    rab.hide();
                    R.hide();
                    R2.hide();
                    enemyface.hide();
                    efb.hide();
                    en.hide();
                    en2.hide();
                    en3.hide();
                    en4.hide();
                    T.hide();

                    wait(0.05);
                    rabb.show();
                    rab.show();

                    Text t8(680, 350, "HIT!");
                    rab.hide();
                    rabb.hide();
                    flag++;
                    cout << "Hi";
                    wait(0.15);
                    t8.hide();
                    wait(0.15);
                    t8.show();
                    wait(0.15);
                    t8.hide();
                }
                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                        break;
                    }
                }
            }
        }
    }
    return flag;
}

int level2()
{

    beginFrame();

    Rectangle r1g(0, 0, 2000, 2000);
    r1g.setColor(COLOR(137, 207, 240));
    r1g.setFill();

    Circle cg(850, 50, 50);
    cg.setColor(COLOR(255, 255, 0));
    cg.setFill();
    Circle c1g(850, 50, 50);

    Rectangle r18g(50, 0, 150, 450);
    r18g.moveTo(150, 355);
    r18g.setColor(COLOR(212, 143, 0));
    r18g.setFill();
    Rectangle r17g(50, 0, 150, 450);
    r17g.moveTo(150, 355);

    Rectangle wg(0, 0, 50, 50);
    wg.moveTo(120, 175);
    wg.setColor(COLOR(21, 25, 0));
    wg.setFill();

    Rectangle r19g(50, 0, 150, 400);
    r19g.moveTo(350, 350);
    r19g.setColor(COLOR(212, 255, 0));
    r19g.setFill();
    Rectangle r20g(50, 0, 150, 400);
    r20g.moveTo(350, 350);

    Rectangle w1g(0, 0, 50, 50);
    w1g.moveTo(380, 195);
    w1g.setColor(COLOR(21, 25, 0));
    w1g.setFill();

    Rectangle r21g(50, 0, 150, 400);
    r21g.moveTo(500, 400);
    r21g.setColor(COLOR(273, 345, 122));
    r21g.setFill();
    Rectangle r22g(50, 0, 150, 400);
    r22g.moveTo(500, 400);

    Rectangle r23g(80, 0, 150, 500);
    r23g.moveTo(650, 350);
    r23g.setColor(COLOR(233, 192, 163));
    r23g.setFill();
    Rectangle r24g(80, 0, 150, 500);
    r24g.moveTo(650, 350);

    Rectangle w2g(0, 0, 50, 70);
    w2g.moveTo(690, 155);
    w2g.setColor(COLOR(21, 25, 0));
    w2g.setFill();

    Rectangle r25g(80, 0, 150, 400);
    r25g.moveTo(800, 350);
    r25g.setColor(COLOR(200, 192, 163));
    r25g.setFill();
    Rectangle r26g(80, 0, 150, 400);
    r26g.moveTo(800, 350);

    Rectangle r2g(50, 0, 200, 400);
    r2g.moveTo(55, 400);
    r2g.setColor(COLOR(255, 255, 0));
    r2g.setFill();
    Rectangle r9g(50, 0, 200, 400);
    r9g.moveTo(55, 400);

    Rectangle w3g(0, 0, 50, 90);
    w3g.moveTo(35, 255);
    w3g.setColor(COLOR(21, 25, 0));
    w3g.setFill();

    Rectangle w4g(0, 0, 50, 90);
    w4g.moveTo(110, 355);
    w4g.setColor(COLOR(21, 25, 0));
    w4g.setFill();

    Rectangle w5g(0, 0, 50, 90);
    w5g.moveTo(35, 455);
    w5g.setColor(COLOR(21, 25, 0));
    w5g.setFill();

    Rectangle w6g(0, 0, 50, 90);
    w6g.moveTo(110, 550);
    w6g.setColor(COLOR(21, 25, 0));
    w6g.setFill();

    Rectangle r3g(80, 0, 150, 500);
    r3g.moveTo(248, 350);
    r3g.setColor(COLOR(0, 192, 163));
    r3g.setFill();
    Rectangle r0g(80, 0, 150, 500);
    r0g.moveTo(248, 350);

    Rectangle w7g(0, 0, 50, 90);
    w7g.moveTo(250, 160);
    w7g.setColor(COLOR(21, 25, 0));
    w7g.setFill();

    Rectangle w8g(0, 0, 50, 90);
    w8g.moveTo(250, 270);
    w8g.setColor(COLOR(21, 25, 0));
    w8g.setFill();

    Rectangle w9g(0, 0, 50, 90);
    w9g.moveTo(250, 380);
    w9g.setColor(COLOR(21, 25, 0));
    w9g.setFill();

    Rectangle w10g(0, 0, 50, 90);
    w10g.moveTo(250, 490);
    w10g.setColor(COLOR(21, 25, 0));
    w10g.setFill();

    Rectangle e1g(0, 0, 70, 20);
    e1g.moveTo(250, 160);
    e1g.setColor(COLOR(128, 0, 0));
    e1g.setFill();

    Rectangle e2g(0, 0, 70, 20);
    e2g.moveTo(250, 270);
    e2g.setColor(COLOR(128, 0, 0));
    e2g.setFill();

    Rectangle e3g(0, 0, 70, 20);
    e3g.moveTo(250, 380);
    e3g.setColor(COLOR(128, 0, 0));
    e3g.setFill();

    Rectangle r4g(0, 0, 135, 350);
    r4g.moveTo(413, 425);
    r4g.setColor(COLOR(255, 97, 93));
    r4g.setFill();
    Rectangle r10g(0, 0, 135, 350);
    r10g.moveTo(413, 425);

    Rectangle r8g(0, 0, 150, 20);
    r8g.moveTo(413, 245);
    r8g.setColor(COLOR(223, 97, 93));
    r8g.setFill();
    Rectangle r11g(0, 0, 150, 20);
    r11g.moveTo(413, 245);

    Rectangle w0g(0, 0, 50, 50);
    w0g.moveTo(415, 295);
    w0g.setColor(COLOR(21, 25, 0));
    w0g.setFill();

    Rectangle w11g(0, 0, 50, 50);
    w11g.moveTo(415, 395);
    w11g.setColor(COLOR(21, 25, 0));
    w11g.setFill();

    Rectangle w12g(0, 0, 50, 50);
    w12g.moveTo(415, 495);
    w12g.setColor(COLOR(21, 25, 0));
    w12g.setFill();

    Rectangle r5g(0, 0, 150, 450);
    r5g.moveTo(578, 375);
    r5g.setColor(COLOR(255, 182, 193));
    r5g.setFill();
    Rectangle r12g(0, 0, 150, 450);
    r12g.moveTo(578, 375);

    Rectangle w13g(0, 0, 50, 90);
    w13g.moveTo(580, 210);
    w13g.setColor(COLOR(21, 25, 0));
    w13g.setFill();

    Rectangle w14g(0, 0, 50, 90);
    w14g.moveTo(580, 330);
    w14g.setColor(COLOR(21, 25, 0));
    w14g.setFill();

    Rectangle w15g(0, 0, 50, 90);
    w15g.moveTo(580, 450);
    w15g.setColor(COLOR(21, 25, 0));
    w15g.setFill();

    Rectangle r6g(50, 0, 150, 400);
    r6g.moveTo(743, 400);
    r6g.setColor(COLOR(233, 166, 81));
    r6g.setFill();
    Rectangle r13g(50, 0, 150, 400);
    r13g.moveTo(743, 400);

    Rectangle w16g(0, 0, 60, 50);
    w16g.moveTo(715, 250);
    w16g.setColor(COLOR(21, 25, 0));
    w16g.setFill();

    Rectangle w17g(0, 0, 60, 50);
    w17g.moveTo(770, 350);
    w17g.setColor(COLOR(21, 25, 0));
    w17g.setFill();

    Rectangle w18g(0, 0, 60, 50);
    w18g.moveTo(715, 450);
    w18g.setColor(COLOR(21, 25, 0));
    w18g.setFill();

    Rectangle e4g(0, 0, 40, 50);
    e4g.moveTo(715, 250);
    e4g.setColor(COLOR(255, 255, 0));
    e4g.setFill();

    Rectangle e5g(0, 0, 40, 50);
    e5g.moveTo(770, 350);
    e5g.setColor(COLOR(255, 255, 0));
    e5g.setFill();

    Rectangle e6g(0, 0, 40, 50);
    e6g.moveTo(715, 450);
    e6g.setColor(COLOR(255, 255, 0));
    e6g.setFill();

    Rectangle r7g(80, 0, 190, 500);
    r7g.moveTo(930, 350);
    r7g.setColor(COLOR(189, 181, 213));
    r7g.setFill();
    Rectangle r14g(80, 0, 190, 500);
    r14g.moveTo(930, 350);

    Rectangle w19g(0, 0, 70, 50);
    w19g.moveTo(925, 150);
    w19g.setColor(COLOR(21, 25, 0));
    w19g.setFill();

    Rectangle w20g(0, 0, 70, 50);
    w20g.moveTo(925, 250);
    w20g.setColor(COLOR(21, 25, 0));
    w20g.setFill();

    Rectangle w21g(0, 0, 70, 50);
    w21g.moveTo(925, 350);
    w21g.setColor(COLOR(21, 25, 0));
    w21g.setFill();

    Rectangle w22g(0, 0, 70, 50);
    w22g.moveTo(925, 350);
    w22g.setColor(COLOR(21, 25, 0));
    w22g.setFill();

    Rectangle w23g(0, 0, 70, 50);
    w23g.moveTo(925, 450);
    w23g.setColor(COLOR(21, 25, 0));
    w23g.setFill();

    double a2[][2] = {{0, 698}, {0, 649}, {99, 648}, {99, 549}, {199, 548}, {200, 449}, {300, 449}, {300, 350}, {399, 350}, {399, 718}};
    Polygon pg(0, 0, a2, 10);
    pg.move(0, 30);
    pg.setColor(COLOR(128, 128, 128));
    pg.setFill();
    Polygon p1g(0, 0, a2, 10);
    p1g.move(0, 30);

    Rectangle t(50, 0, 500, 200);
    t.moveTo(650, 600);
    t.setColor(COLOR(128, 128, 128));
    t.setFill();
    Rectangle t1(50, 0, 500, 200);
    t1.moveTo(650, 600);

    Rectangle r15g(50, 0, 500, 350);
    r15g.moveTo(750, 600);
    r15g.setColor(COLOR(128, 128, 128));
    r15g.setFill();
    Rectangle r16g(50, 0, 500, 350);
    r16g.moveTo(750, 600);

    Rectangle t2(50, 0, 400, 198);
    t2.moveTo(550, 600);
    t2.setColor(COLOR(128, 128, 128));
    t2.setFill();
    endFrame();

    // main character
    // Wizard
    // hand

    beginFrame();
    Rectangle wizardhand(100, 170, 24, 12);
    wizardhand.rotate(210);
    wizardhand.setColor(COLOR(128, 0, 128));
    wizardhand.setFill();
    // wizardhand.moveTo(100, 400);

    // dress
    double h[17][2] = {{225, 225}, {150, 250}, {160, 270}, {180, 260}, {125, 400}, {153, 370}, {181, 400}, {209, 370}, {237, 400}, {265, 370}, {293, 400}, {315, 370}, {325, 400}, {270, 260}, {320, 270}, {330, 250}, {225, 225}};
    Polygon d(0, 7, h, 10);
    d.setColor(COLOR(190, 0, 128));
    d.setFill();
    d.scale(0.6);

    // face
    Circle wizardface(133, 133, 18);
    wizardface.setColor(COLOR(232, 190, 172));
    wizardface.setFill();

    // eyes
    Circle e3(128, 130, 4);
    e3.setColor(COLOR("white"));
    e3.setFill();

    Circle e2(142, 130, 4);
    e2.setColor(COLOR("white"));
    e2.setFill();

    Circle e4(130, 132, 2);
    e4.setColor(COLOR("black"));
    e4.setFill();

    Circle e5(144, 132, 2);
    e5.setColor(COLOR("black"));
    e5.setFill();

    // Hat
    double a[4][2] = {{116, 122}, {150, 122}, {104, 68}, {116, 122}};
    Polygon p(0, 0, a, 4);
    p.setColor(COLOR(128, 0, 128));
    p.setFill();

    // star
    double z[6][2] = {{110, 100}, {190, 100}, {125, 150}, {150, 65}, {175, 150}, {110, 100}};
    Polygon s(0, 0, z, 6);
    s.setColor(COLOR("yellow"));
    s.setFill();
    s.scale(0.18);
    s.moveTo(106, 143);

    Polygon s1(0, 0, z, 6);
    s1.setColor(COLOR("yellow"));
    s1.setFill();
    s1.scale(0.18);
    s1.moveTo(88, 160);

    Polygon s2(0, 0, z, 6);
    s2.setColor(COLOR("yellow"));
    s2.setFill();
    s2.scale(0.18);
    s2.moveTo(111, 206);

    Polygon s3(0, 0, z, 6);
    s3.setColor(COLOR("yellow"));
    s3.setFill();
    s3.scale(0.18);
    s3.moveTo(85, 206);

    Polygon s4(0, 0, z, 6);
    s4.setColor(COLOR("yellow"));
    s4.setFill();
    s4.scale(0.18);
    s4.moveTo(110, 175);

    Polygon s5(0, 0, z, 6);
    s5.setColor(COLOR("yellow"));
    s5.setFill();
    s5.scale(0.18);
    s5.moveTo(80, 185);

    wizardhand.move(0, 300);
    wizardface.move(0, 300);
    d.move(0, 300);
    e2.move(0, 300);
    e3.move(0, 300);
    e4.move(0, 300);
    e5.move(0, 300);
    p.move(0, 300);
    s.move(0, 300);
    s1.move(0, 300);
    s2.move(0, 300);
    s3.move(0, 300);
    s4.move(0, 300);
    s5.move(0, 300);

    endFrame();

    // projectile

    double effect[15][2] = {{100, 100}, {120, 50}, {130, 100}, {165, 75}, {145, 120}, {190, 140}, {140, 145}, {145, 180}, {120, 148}, {100, 175}, {103, 136}, {70, 130}, {95, 120}, {85, 75}, {100, 100}};
    Polygon pe(0, 0, effect, 15);
    pe.setColor(COLOR("yellow"));
    pe.setFill();
    pe.scale(0.2);
    pe.hide();

    mcx = wizardhand.getX();
    mcy = wizardhand.getY();

    // enemy
    // Generic Enemy

    Rectangle R(700, 420, 70, 70);
    R.setColor(COLOR(242, 140, 40));
    R.setFill();
    Rectangle R2(700, 420, 70, 70);
    R.move(0, -120);
    R2.move(0, -120);

    // Enemy Body
    Rectangle rab(700, 380, 70, 90);
    // rab.move(0,-120);
    Rectangle rabb(700, 500, 70, 90);
    rabb.move(0, -120);

    rab.setColor(COLOR(255, 165, 0));
    rab.setFill();

    double face[4][2] = {{155, 175}, {245, 175}, {200, 255}, {155, 175}};
    Polygon enemyface(500, 225, face, 4);
    enemyface.move(0, -120);
    enemyface.setColor(COLOR(0, 191, 255));
    enemyface.setFill();
    Polygon efb(500, 225, face, 4);
    efb.move(0, -120);
    // enemyface.moveTo(100,100);

    // Eyes
    Circle en(715, 410, 8);
    en.setColor(COLOR("white"));
    en.setFill();
    en.move(0, -120);

    Circle en2(685, 410, 8);
    en2.setColor(COLOR("white"));
    en2.setFill();
    en2.move(0, -120);

    Circle en3(713, 408, 4);
    en3.setColor(COLOR("red"));
    en3.setFill();
    en3.move(0, -120);

    Circle en4(683, 408, 4);
    en4.setColor(COLOR("red"));
    en4.setFill();
    en4.move(0, -120);

    double teeth[7][2] = {{180, 210}, {220, 210}, {220, 220}, {210, 210}, {190, 210}, {180, 220}, {180, 210}};
    Polygon T(0, 0, teeth, 7);
    T.setColor(COLOR("red"));
    T.moveTo(500, 225);
    T.move(0, -120);
    T.setFill();

    e2x = rab.getX();
    e2y = rab.getY();

    XEvent f;

    mcx = wizardhand.getX();

    while (flag == 1)
    {

        nextEvent(f);

        switch (charFromEvent(f))
        {

        case 27:

            exit(1);

            break;
        // get help with h
        case 104:
        {

            beginFrame();
            Text t0(480, 350, "----INSTRUCTIONS----");
            t0.setColor(RED);
            Text t1(500, 290, "Press d/D to MOVE RIGHT");
            Text t2(500, 310, "Press a/A to MOVE LEFT");
            Text t3(500, 330, "Press w/W to MOVE UP");
            Text t4(500, 350, "Press s/S to MOVE DOWN");
            Text t5(500, 370, "Press e/E to JUMP");
            Text t6(500, 390, "Press f/F to CAST A SPELL");
            endFrame();
            wait(4);
            t0.hide();
            t1.hide();
            t2.hide();
            t3.hide();
            t4.hide();
            t5.hide();
            t6.hide();
        }
        break;

        // get help with H
        case 072:
        {

            beginFrame();
            Text t0a(480, 350, "----INSTRUCTIONS----");
            t0a.setColor(RED);
            Text t1a(500, 290, "Press d/D to MOVE RIGHT");
            Text t2a(500, 310, "Press a/A to MOVE LEFT");
            Text t3a(500, 330, "Press w/W to MOVE UP");
            Text t4a(500, 350, "Press s/S to MOVE DOWN");
            Text t5a(500, 370, "Press e/E to JUMP");
            Text t6a(500, 390, "Press f/F to CAST A SPELL");
            endFrame();

            wait(4);
            beginFrame();
            t0a.hide();
            t1a.hide();
            t2a.hide();
            t3a.hide();
            t4a.hide();
            t5a.hide();
            t6a.hide();
            endFrame();
        }
        break;

        // move up with w
        case 119:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();

            break;

        // move left with a
        case 97:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();

            break;

        // move down with s
        case 115:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();
            break;

        // move right with d
        case 100:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();

            break;

        // move up with W
        case 87:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();
            break;

        // move left with A
        case 65:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();

            break;

        // move down with S
        case 83:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();

            break;

        // move right with D
        case 68:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();

            break;

        // jump with E
        case 69:
            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 120);
            wizardface.move(0, 120);
            d.move(0, 120);
            e2.move(0, 120);
            e3.move(0, 120);
            e4.move(0, 120);
            e5.move(0, 120);
            p.move(0, 120);
            s.move(0, 120);
            s1.move(0, 120);
            s2.move(0, 120);
            s3.move(0, 120);
            s4.move(0, 120);
            s5.move(0, 120);

            endFrame();
            break;

        // jump with e
        case 101:

            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 50);
            wizardface.move(0, 50);
            d.move(0, 50);
            e2.move(0, 50);
            e3.move(0, 50);
            e4.move(0, 50);
            e5.move(0, 50);
            p.move(0, 50);
            s.move(0, 50);
            s1.move(0, 50);
            s2.move(0, 50);
            s3.move(0, 50);
            s4.move(0, 50);
            s5.move(0, 50);

            endFrame();

            break;

        // shoot with F
        case 70:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < e2x)
                {

                    pe.move(10, 0);
                }

                else if (by >= 265 && by <= 425)
                {

                    pe.hide();
                    pe.moveTo(0, 0);
                    wait(0.09);
                    Text t10(600, 600, "HIT");

                    rabb.hide();
                    rab.hide();
                    R.hide();
                    R2.hide();
                    enemyface.hide();
                    efb.hide();
                    en.hide();
                    en2.hide();
                    en3.hide();
                    en4.hide();
                    T.hide();

                    wait(0.05);
                    rabb.show();
                    rab.show();

                    Text t8(680, 350, "HIT!");
                    rab.hide();
                    rabb.hide();
                    flag++;

                    wait(0.15);
                    t8.hide();
                    wait(0.15);
                    t8.show();
                    wait(0.15);
                    t8.hide();
                }
                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                        break;
                    }
                }
            }

        // shoot with f
        case 102:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < e2x)
                {
                    pe.move(10, 0);
                }

                else if (by >= 265 && by <= 425)
                {

                    pe.hide();
                    pe.moveTo(0, 0);
                    wait(0.09);
                    Text t10(600, 600, "HIT");

                    rabb.hide();
                    rab.hide();
                    R.hide();
                    R2.hide();
                    enemyface.hide();
                    efb.hide();
                    en.hide();
                    en2.hide();
                    en3.hide();
                    en4.hide();
                    T.hide();

                    wait(0.05);
                    rabb.show();
                    rab.show();

                    Text t8(680, 350, "HIT!");
                    rab.hide();
                    rabb.hide();
                    flag++;

                    wait(0.15);
                    t8.hide();
                    wait(0.15);
                    t8.show();
                    wait(0.15);
                    t8.hide();
                }
                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                        break;
                    }
                }
            }
        }
    }
    return flag;
}

int level3()
{

    beginFrame();

    Rectangle r1n(0, 0, 2000, 2000);
    r1n.setColor(COLOR(137, 207, 240));
    r1n.setFill();
    Rectangle r4n(80, 0, 150, 600);
    r4n.moveTo(200, 350);
    r4n.setColor(COLOR(255, 255, 0));
    r4n.setFill();
    Rectangle r57n(80, 0, 150, 600);
    r57n.moveTo(200, 350);

    Rectangle r2n(50, 0, 200, 500);
    r2n.moveTo(50, 400);
    r2n.setColor(COLOR(255, 0, 255));
    r2n.setFill();
    Rectangle r58n(50, 0, 200, 500);
    r58n.moveTo(50, 400);

    Rectangle r11n(100, 0, 60, 30);
    r11n.moveTo(50, 200);
    r11n.setColor(COLOR(0, 0, 0));
    r11n.setFill();
    Rectangle r12n(100, 0, 60, 30);
    r12n.moveTo(50, 300);
    r12n.setColor(COLOR(0, 0, 0));
    r12n.setFill();
    Rectangle r13n(100, 0, 60, 30);
    r13n.moveTo(50, 400);
    r13n.setColor(COLOR(0, 0, 0));
    r13n.setFill();
    Rectangle r14n(100, 0, 60, 30);
    r14n.moveTo(50, 500);
    r14n.setColor(COLOR(0, 0, 0));
    r14n.setFill();
    Rectangle r15n(100, 0, 60, 30);
    r15n.moveTo(50, 600);
    r15n.setColor(COLOR(0, 0, 0));
    r15n.setFill();
    Rectangle r40n(100, 0, 30, 30);
    r40n.moveTo(50, 200);
    r40n.setColor(COLOR(255, 255, 0));
    r40n.setFill();
    Rectangle r41n(100, 0, 30, 30);
    r41n.moveTo(50, 300);
    r41n.setColor(COLOR(255, 255, 0));
    r41n.setFill();
    Rectangle r42n(100, 0, 30, 30);
    r42n.moveTo(50, 400);
    r42n.setColor(COLOR(255, 255, 0));
    r42n.setFill();
    Rectangle r43n(100, 0, 30, 30);
    r43n.moveTo(50, 500);
    r43n.setColor(COLOR(255, 255, 0));
    r43n.setFill();
    Rectangle r44n(100, 0, 30, 30);
    r44n.moveTo(50, 600);
    r44n.setColor(COLOR(255, 255, 0));
    r44n.setFill();

    Rectangle r52n(80, 0, 100, 700);
    r52n.moveTo(370, 400);
    r52n.setColor(COLOR(0, 128, 128));
    r52n.setFill();
    Rectangle r59n(80, 0, 100, 700);
    r59n.moveTo(370, 400);

    Rectangle r3n(80, 0, 150, 500);
    r3n.moveTo(320, 400);
    r3n.setColor(COLOR(205, 133, 63));
    r3n.setFill();
    Rectangle r60n(80, 0, 150, 500);
    r60n.moveTo(320, 400);
    Rectangle r48n(80, 0, 50, 50);
    r48n.moveTo(300, 300);
    r48n.setColor(COLOR(0, 0, 0));
    r48n.setFill();
    Rectangle r49n(80, 0, 50, 50);
    r49n.moveTo(300, 400);
    r49n.setColor(COLOR(0, 0, 0));
    r49n.setFill();
    Rectangle r50n(80, 0, 50, 50);
    r50n.moveTo(300, 500);
    r50n.setColor(COLOR(0, 0, 0));
    r50n.setFill();
    Rectangle r51n(80, 0, 50, 50);
    r51n.moveTo(300, 200);
    r51n.setColor(COLOR(0, 0, 0));
    r51n.setFill();

    Rectangle r5n(80, 0, 150, 800);
    r5n.moveTo(570, 450);
    r5n.setColor(COLOR(255, 204, 0));
    r5n.setFill();
    Rectangle r61n(80, 0, 150, 800);
    r61n.moveTo(570, 450);

    Rectangle r16n(100, 0, 30, 60);
    r16n.moveTo(200, 600);
    r16n.setColor(COLOR(0, 0, 0));
    r16n.setFill();
    Rectangle r17n(100, 0, 30, 60);
    r17n.moveTo(200, 500);
    r17n.setColor(COLOR(0, 0, 0));
    r17n.setFill();
    Rectangle r18n(100, 0, 30, 60);
    r18n.moveTo(200, 400);
    r18n.setColor(COLOR(0, 0, 0));
    r18n.setFill();
    Rectangle r19n(100, 0, 30, 60);
    r19n.moveTo(200, 300);
    r19n.setColor(COLOR(0, 0, 0));
    r19n.setFill();
    Rectangle r20n(100, 0, 30, 60);
    r20n.moveTo(200, 200);
    r20n.setColor(COLOR(0, 0, 0));
    r20n.setFill();
    Rectangle r21n(100, 0, 30, 60);
    r21n.moveTo(200, 100);
    r21n.setColor(COLOR(0, 0, 0));
    r21n.setFill();

    Rectangle r6n(50, 0, 100, 700);
    r6n.moveTo(480, 350);
    r6n.setColor(COLOR(240, 128, 128));
    r6n.setFill();
    Rectangle r62n(50, 0, 100, 700);
    r62n.moveTo(480, 350);

    Rectangle r7n(50, 0, 150, 500);
    r7n.moveTo(700, 400);
    r7n.setColor(COLOR(238, 130, 238));
    r7n.setFill();
    Rectangle r63n(50, 0, 150, 500);
    r63n.moveTo(700, 400);
    Rectangle r22n(100, 0, 50, 50);
    r22n.moveTo(470, 300);
    r22n.setColor(COLOR(0, 0, 0));
    r22n.setFill();
    Rectangle r23n(100, 0, 50, 50);
    r23n.moveTo(470, 200);
    r23n.setColor(COLOR(0, 0, 0));
    r23n.setFill();
    Rectangle r24n(100, 0, 50, 50);
    r24n.moveTo(470, 100);
    r24n.setColor(COLOR(0, 0, 0));
    r24n.setFill();
    Rectangle r25n(100, 0, 50, 50);
    r25n.moveTo(470, 400);
    r25n.setColor(COLOR(0, 0, 0));
    r25n.setFill();
    Rectangle r26n(100, 0, 50, 50);
    r26n.moveTo(470, 500);
    r26n.setColor(COLOR(0, 0, 0));
    r26n.setFill();
    Rectangle r27n(100, 0, 50, 50);
    r27n.moveTo(470, 600);
    r27n.setColor(COLOR(0, 0, 0));
    r27n.setFill();

    Rectangle r8n(80, 0, 100, 800);
    r8n.moveTo(870, 250);
    r8n.setColor(COLOR(255, 20, 147));
    r8n.setFill();
    Rectangle r64n(80, 0, 100, 800);
    r64n.moveTo(870, 250);

    Rectangle r28n(100, 0, 50, 100);
    r28n.moveTo(700, 500);
    r28n.setColor(COLOR(0, 0, 0));
    r28n.setFill();
    Rectangle r29n(100, 0, 50, 100);
    r29n.moveTo(700, 300);
    r29n.setColor(COLOR(0, 0, 0));
    r29n.setFill();
    Rectangle r34n(100, 0, 90, 30);
    r34n.moveTo(700, 500);
    r34n.setColor(COLOR(139, 69, 19));
    r34n.setFill();
    Rectangle r35n(100, 0, 90, 30);
    r35n.moveTo(700, 300);
    r35n.setColor(COLOR(139, 69, 19));
    r35n.setFill();

    Rectangle r9n(50, 0, 100, 600);
    r9n.moveTo(840, 350);
    r9n.setColor(COLOR(153, 153, 255));
    r9n.setFill();
    Rectangle r65n(50, 0, 100, 600);
    r65n.moveTo(840, 350);

    Rectangle r53n(50, 0, 60, 30);
    r53n.moveTo(840, 300);
    r53n.setColor(COLOR(0, 0, 0));
    r53n.setFill();
    Rectangle r54n(50, 0, 60, 30);
    r54n.moveTo(840, 200);
    r54n.setColor(COLOR(0, 0, 0));
    r54n.setFill();
    Rectangle r55n(50, 0, 60, 30);
    r55n.moveTo(840, 400);
    r55n.setColor(COLOR(0, 0, 0));
    r55n.setFill();
    Rectangle r56n(50, 0, 60, 30);
    r56n.moveTo(840, 100);
    r56n.setColor(COLOR(0, 0, 0));
    r56n.setFill();

    Rectangle r10n(50, 0, 100, 500);
    r10n.moveTo(950, 400);
    r10n.setColor(COLOR(255, 165, 0));
    r10n.setFill();
    Rectangle r66n(50, 0, 100, 500);
    r66n.moveTo(950, 400);

    Rectangle r30n(100, 0, 50, 50);
    r30n.moveTo(950, 400);
    r30n.setColor(COLOR(0, 0, 0));
    r30n.setFill();
    Rectangle r31n(100, 0, 50, 50);
    r31n.moveTo(950, 300);
    r31n.setColor(COLOR(0, 0, 0));
    r31n.setFill();
    Rectangle r32n(100, 0, 50, 50);
    r32n.moveTo(950, 500);
    r32n.setColor(COLOR(0, 0, 0));
    r32n.setFill();
    Rectangle r33n(100, 0, 50, 50);
    r33n.moveTo(950, 600);
    r33n.setColor(COLOR(0, 0, 0));
    r33n.setFill();
    Rectangle r36n(100, 0, 30, 30);
    r36n.moveTo(950, 400);
    r36n.setColor(COLOR(128, 128, 128));
    r36n.setFill();
    Rectangle r37n(100, 0, 30, 30);
    r37n.moveTo(950, 300);
    r37n.setColor(COLOR(128, 128, 128));
    r37n.setFill();
    Rectangle r38n(100, 0, 30, 30);
    r38n.moveTo(950, 500);
    r38n.setColor(COLOR(128, 128, 128));
    r38n.setFill();
    Rectangle r39n(100, 0, 30, 30);
    r39n.moveTo(950, 600);
    r39n.setColor(COLOR(128, 128, 128));
    r39n.setFill();
    Rectangle r46n(190, 200, 298, 410);
    r46n.moveTo(150, 600);
    r46n.setColor(COLOR(128, 128, 128));
    r46n.setFill();
    Rectangle r68n(190, 200, 298, 410);
    r68n.moveTo(150, 600);
    Rectangle r47n(190, 250, 198, 200);
    r47n.moveTo(300, 600);
    r47n.setColor(COLOR(128, 128, 128));
    r47n.setFill();
    Rectangle r69n(190, 250, 198, 200);
    r69n.moveTo(300, 600);
    Rectangle r71n(190, 250, 198, 400);
    r71n.moveTo(200, 700);
    r71n.setColor(COLOR(128, 128, 128));
    r71n.setFill();

    double a[][2] = {{0, 698}, {0, 649}, {99, 648}, {99, 549}, {199, 548}, {200, 449}, {300, 449}, {300, 350}, {399, 350}, {399, 718}};
    Polygon pn(0, 0, a, 10);
    pn.move(400, 30);
    pn.setColor(COLOR(128, 128, 128));
    pn.setFill();

    double a1[][2] = {{0, 698}, {0, 649}, {99, 648}, {99, 549}, {199, 548}, {200, 449}, {300, 449}, {300, 350}, {399, 350}, {399, 718}};
    Polygon pn1(0, 0, a, 10);
    pn1.move(400, 30);

    Rectangle r45n(190, 200, 298, 310);
    r45n.moveTo(950, 600);
    r45n.setColor(COLOR(128, 128, 128));
    r45n.setFill();
    Rectangle r67n(190, 200, 298, 310);
    r67n.moveTo(950, 600);
    Rectangle r70n(190, 200, 298, 380);
    r70n.moveTo(850, 640);
    r70n.setColor(COLOR(128, 128, 128));
    r70n.setFill();

    endFrame();

    // main character
    // Wizard
    // hand

    beginFrame();
    Rectangle wizardhand(100, 170, 24, 12);
    wizardhand.rotate(210);
    wizardhand.setColor(COLOR(128, 0, 128));
    wizardhand.setFill();

    // dress
    double h[17][2] = {{225, 225}, {150, 250}, {160, 270}, {180, 260}, {125, 400}, {153, 370}, {181, 400}, {209, 370}, {237, 400}, {265, 370}, {293, 400}, {315, 370}, {325, 400}, {270, 260}, {320, 270}, {330, 250}, {225, 225}};
    Polygon d(0, 7, h, 10);
    d.setColor(COLOR(190, 0, 128));
    d.setFill();
    d.scale(0.6);

    // face
    Circle wizardface(133, 133, 18);
    wizardface.setColor(COLOR(232, 190, 172));
    wizardface.setFill();

    // eyes
    Circle e3(128, 130, 4);
    e3.setColor(COLOR("white"));
    e3.setFill();

    Circle e2(142, 130, 4);
    e2.setColor(COLOR("white"));
    e2.setFill();

    Circle e4(130, 132, 2);
    e4.setColor(COLOR("black"));
    e4.setFill();

    Circle e5(144, 132, 2);
    e5.setColor(COLOR("black"));
    e5.setFill();

    // Hat
    double aa2[4][2] = {{116, 122}, {150, 122}, {104, 68}, {116, 122}};
    Polygon p(0, 0, aa2, 4);
    p.setColor(COLOR(128, 0, 128));
    p.setFill();

    // star
    double z[6][2] = {{110, 100}, {190, 100}, {125, 150}, {150, 65}, {175, 150}, {110, 100}};
    Polygon s(0, 0, z, 6);
    s.setColor(COLOR("yellow"));
    s.setFill();
    s.scale(0.18);
    s.moveTo(106, 143);

    Polygon s1(0, 0, z, 6);
    s1.setColor(COLOR("yellow"));
    s1.setFill();
    s1.scale(0.18);
    s1.moveTo(88, 160);

    Polygon s2(0, 0, z, 6);
    s2.setColor(COLOR("yellow"));
    s2.setFill();
    s2.scale(0.18);
    s2.moveTo(111, 206);

    Polygon s3(0, 0, z, 6);
    s3.setColor(COLOR("yellow"));
    s3.setFill();
    s3.scale(0.18);
    s3.moveTo(85, 206);

    Polygon s4(0, 0, z, 6);
    s4.setColor(COLOR("yellow"));
    s4.setFill();
    s4.scale(0.18);
    s4.moveTo(110, 175);

    Polygon s5(0, 0, z, 6);
    s5.setColor(COLOR("yellow"));
    s5.setFill();
    s5.scale(0.18);
    s5.moveTo(80, 185);

    wizardhand.move(0, 140);
    wizardface.move(0, 140);
    d.move(0, 140);
    e2.move(0, 140);
    e3.move(0, 140);
    e4.move(0, 140);
    e5.move(0, 140);
    p.move(0, 140);
    s.move(0, 140);
    s1.move(0, 140);
    s2.move(0, 140);
    s3.move(0, 140);
    s4.move(0, 140);
    s5.move(0, 140);

    endFrame();

    // projectile

    double effect[15][2] = {{100, 100}, {120, 50}, {130, 100}, {165, 75}, {145, 120}, {190, 140}, {140, 145}, {145, 180}, {120, 148}, {100, 175}, {103, 136}, {70, 130}, {95, 120}, {85, 75}, {100, 100}};
    Polygon pe(0, 0, effect, 15);
    pe.setColor(COLOR("yellow"));
    pe.setFill();
    pe.scale(0.2);
    pe.hide();

    mcx = wizardhand.getX();
    mcy = wizardhand.getY();

    // enemy
    // Generic Enemy

    beginFrame();
    Rectangle R(700, 420, 70, 70);
    R.setColor(COLOR(242, 140, 40));
    R.setFill();
    Rectangle R2(700, 420, 70, 70);
    R.move(50, -165);
    R2.move(50, -165);

    // Enemy Body
    Rectangle rab(700, 500, 70, 90);
    rab.move(50, -165);
    Rectangle rabb(700, 500, 70, 90);
    rabb.move(50, -165);

    rab.setColor(COLOR(255, 165, 0));
    rab.setFill();

    double face[4][2] = {{155, 175}, {245, 175}, {200, 255}, {155, 175}};
    Polygon enemyface(500, 225, face, 4);
    enemyface.setColor(COLOR(0, 191, 255));
    enemyface.setFill();
    Polygon efb(500, 225, face, 4);
    efb.move(50, -165);
    enemyface.move(50, -165);

    // Eyes
    Circle en(715, 410, 8);
    en.setColor(COLOR("white"));
    en.setFill();
    en.move(50, -165);

    Circle en2(685, 410, 8);
    en2.setColor(COLOR("white"));
    en2.setFill();
    en2.move(50, -165);

    Circle en3(713, 408, 4);
    en3.setColor(COLOR("red"));
    en3.setFill();
    en3.move(50, -165);

    Circle en4(683, 408, 4);
    en4.setColor(COLOR("red"));
    en4.setFill();
    en4.move(50, -165);

    double teeth[7][2] = {{180, 210}, {220, 210}, {220, 220}, {210, 210}, {190, 210}, {180, 220}, {180, 210}};
    Polygon T(0, 0, teeth, 7);
    T.setColor(COLOR("red"));
    T.moveTo(500, 225);
    T.setFill();
    T.move(50, -165);

    endFrame();

    XEvent f;

    mcx = wizardhand.getX();

    e3x = rab.getX();

    while (flag == 2)
    {

        nextEvent(f);

        switch (charFromEvent(f))
        {

        case 27:

            exit(1);

            break;
        // get help with h
        case 104:
        {

            beginFrame();
            Text t0(480, 350, "----INSTRUCTIONS----");
            t0.setColor(RED);
            Text t1(500, 290, "Press d/D to MOVE RIGHT");
            Text t2(500, 310, "Press a/A to MOVE LEFT");
            Text t3(500, 330, "Press w/W to MOVE UP");
            Text t4(500, 350, "Press s/S to MOVE DOWN");
            Text t5(500, 370, "Press e/E to JUMP");
            Text t6(500, 390, "Press f/F to CAST A SPELL");
            endFrame();
            wait(4);
            t0.hide();
            t1.hide();
            t2.hide();
            t3.hide();
            t4.hide();
            t5.hide();
            t6.hide();
        }
        break;

        // get help with H
        case 072:
        {

            beginFrame();
            Text t0a(480, 350, "----INSTRUCTIONS----");
            t0a.setColor(RED);
            Text t1a(500, 290, "Press d/D to MOVE RIGHT");
            Text t2a(500, 310, "Press a/A to MOVE LEFT");
            Text t3a(500, 330, "Press w/W to MOVE UP");
            Text t4a(500, 350, "Press s/S to MOVE DOWN");
            Text t5a(500, 370, "Press e/E to JUMP");
            Text t6a(500, 390, "Press f/F to CAST A SPELL");
            endFrame();

            wait(4);
            beginFrame();
            t0a.hide();
            t1a.hide();
            t2a.hide();
            t3a.hide();
            t4a.hide();
            t5a.hide();
            t6a.hide();
            endFrame();
        }
        break;

        // move up with w
        case 119:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();

            break;

        // move left with a
        case 97:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();
            break;

        // move down with s
        case 115:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();
            break;

        // move right with d
        case 100:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();

            break;

        // move up with W
        case 87:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();

            break;

        // move left with A
        case 65:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();

            break;

        // move down with S
        case 83:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();

            break;

        // move right with D
        case 68:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();
            break;

        case 69:
            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 50);
            wizardface.move(0, 50);
            d.move(0, 50);
            e2.move(0, 50);
            e3.move(0, 50);
            e4.move(0, 50);
            e5.move(0, 50);
            p.move(0, 50);
            s.move(0, 50);
            s1.move(0, 50);
            s2.move(0, 50);
            s3.move(0, 50);
            s4.move(0, 50);
            s5.move(0, 50);
            endFrame();
            break;

        // jump with e
        case 101:

            // move up
            beginFrame();

            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 120);
            wizardface.move(0, 120);
            d.move(0, 120);
            e2.move(0, 120);
            e3.move(0, 120);
            e4.move(0, 120);
            e5.move(0, 120);
            p.move(0, 120);
            s.move(0, 120);
            s1.move(0, 120);
            s2.move(0, 120);
            s3.move(0, 120);
            s4.move(0, 120);
            s5.move(0, 120);

            endFrame();

            break;

        // shoot with f
        case 102:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < e3x)
                {
                    pe.move(10, 0);
                }

                else if (by >= 220 && by <= 380)
                {

                    pe.hide();
                    pe.moveTo(0, 0);
                    wait(0.09);
                    Text t10(600, 600, "HIT");

                    rabb.hide();
                    rab.hide();
                    R.hide();
                    R2.hide();
                    enemyface.hide();
                    efb.hide();
                    en.hide();
                    en2.hide();
                    en3.hide();
                    en4.hide();
                    T.hide();

                    wait(0.05);
                    rabb.show();
                    rab.show();

                    Text t8(680, 350, "HIT!");
                    rab.hide();
                    rabb.hide();
                    flag++;

                    wait(0.15);
                    t8.hide();
                    wait(0.15);
                    t8.show();
                    wait(0.15);
                    t8.hide();
                }
                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                        break;
                    }
                }
            }
        }
    }

    return flag;
}

int level4()
{

    // Level 4

    beginFrame();
    Rectangle r1k(0, 0, 2000, 2000);
    r1k.setColor(COLOR(137, 207, 240));
    r1k.setFill();

    Circle ck(850, 50, 50);
    ck.setColor(COLOR(255, 255, 0));
    ck.setFill();
    Circle c1k(850, 50, 50);

    Rectangle r18k(50, 0, 150, 450);
    r18k.moveTo(150, 355);
    r18k.setColor(COLOR(212, 143, 0));
    r18k.setFill();
    Rectangle r17k(50, 0, 150, 450);
    r17k.moveTo(150, 355);

    Rectangle w(0, 0, 50, 50);
    w.moveTo(120, 175);
    w.setColor(COLOR(21, 25, 0));
    w.setFill();

    Rectangle r19k(50, 0, 150, 400);
    r19k.moveTo(350, 350);
    r19k.setColor(COLOR(212, 255, 0));
    r19k.setFill();
    Rectangle r20k(50, 0, 150, 400);
    r20k.moveTo(350, 350);

    Rectangle w1(0, 0, 50, 50);
    w1.moveTo(380, 195);
    w1.setColor(COLOR(21, 25, 0));
    w1.setFill();

    Rectangle r21k(50, 0, 150, 400);
    r21k.moveTo(500, 400);
    r21k.setColor(COLOR(273, 345, 122));
    r21k.setFill();
    Rectangle r22k(50, 0, 150, 400);
    r22k.moveTo(500, 400);

    Rectangle r23k(80, 0, 150, 500);
    r23k.moveTo(650, 350);
    r23k.setColor(COLOR(233, 192, 163));
    r23k.setFill();
    Rectangle r24k(80, 0, 150, 500);
    r24k.moveTo(650, 350);

    Rectangle w2(0, 0, 50, 70);
    w2.moveTo(690, 155);
    w2.setColor(COLOR(21, 25, 0));
    w2.setFill();

    Rectangle r25k(80, 0, 150, 400);
    r25k.moveTo(800, 350);
    r25k.setColor(COLOR(200, 192, 163));
    r25k.setFill();
    Rectangle r26k(80, 0, 150, 400);
    r26k.moveTo(800, 350);

    Rectangle r2k(50, 0, 200, 400);
    r2k.moveTo(55, 400);
    r2k.setColor(COLOR(255, 255, 0));
    r2k.setFill();
    Rectangle r9k(50, 0, 200, 400);
    r9k.moveTo(55, 400);

    Rectangle w3(0, 0, 50, 90);
    w3.moveTo(35, 255);
    w3.setColor(COLOR(21, 25, 0));
    w3.setFill();

    Rectangle w4(0, 0, 50, 90);
    w4.moveTo(110, 355);
    w4.setColor(COLOR(21, 25, 0));
    w4.setFill();

    Rectangle w5(0, 0, 50, 90);
    w5.moveTo(35, 455);
    w5.setColor(COLOR(21, 25, 0));
    w5.setFill();

    Rectangle w6(0, 0, 50, 90);
    w6.moveTo(110, 550);
    w6.setColor(COLOR(21, 25, 0));
    w6.setFill();

    Rectangle r3k(80, 0, 150, 500);
    r3k.moveTo(248, 350);
    r3k.setColor(COLOR(0, 192, 163));
    r3k.setFill();
    Rectangle r0k(80, 0, 150, 500);
    r0k.moveTo(248, 350);

    Rectangle w7(0, 0, 50, 90);
    w7.moveTo(250, 160);
    w7.setColor(COLOR(21, 25, 0));
    w7.setFill();

    Rectangle w8(0, 0, 50, 90);
    w8.moveTo(250, 270);
    w8.setColor(COLOR(21, 25, 0));
    w8.setFill();

    Rectangle w9(0, 0, 50, 90);
    w9.moveTo(250, 380);
    w9.setColor(COLOR(21, 25, 0));
    w9.setFill();

    Rectangle w10(0, 0, 50, 90);
    w10.moveTo(250, 490);
    w10.setColor(COLOR(21, 25, 0));
    w10.setFill();

    Rectangle e1n(0, 0, 70, 20);
    e1n.moveTo(250, 160);
    e1n.setColor(COLOR(128, 0, 0));
    e1n.setFill();

    Rectangle e2n(0, 0, 70, 20);
    e2n.moveTo(250, 270);
    e2n.setColor(COLOR(128, 0, 0));
    e2n.setFill();

    Rectangle e3n(0, 0, 70, 20);
    e3n.moveTo(250, 380);
    e3n.setColor(COLOR(128, 0, 0));
    e3n.setFill();

    Rectangle r4k(0, 0, 135, 350);
    r4k.moveTo(413, 425);
    r4k.setColor(COLOR(255, 97, 93));
    r4k.setFill();
    Rectangle r10k(0, 0, 135, 350);
    r10k.moveTo(413, 425);

    Rectangle r8k(0, 0, 150, 20);
    r8k.moveTo(413, 245);
    r8k.setColor(COLOR(223, 97, 93));
    r8k.setFill();
    Rectangle r11k(0, 0, 150, 20);
    r11k.moveTo(413, 245);

    Rectangle w0(0, 0, 50, 50);
    w0.moveTo(415, 295);
    w0.setColor(COLOR(21, 25, 0));
    w0.setFill();

    Rectangle w11(0, 0, 50, 50);
    w11.moveTo(415, 395);
    w11.setColor(COLOR(21, 25, 0));
    w11.setFill();

    Rectangle w12(0, 0, 50, 50);
    w12.moveTo(415, 495);
    w12.setColor(COLOR(21, 25, 0));
    w12.setFill();

    Rectangle r5k(0, 0, 150, 450);
    r5k.moveTo(578, 375);
    r5k.setColor(COLOR(255, 182, 193));
    r5k.setFill();
    Rectangle r12k(0, 0, 150, 450);
    r12k.moveTo(578, 375);

    Rectangle w13(0, 0, 50, 90);
    w13.moveTo(580, 210);
    w13.setColor(COLOR(21, 25, 0));
    w13.setFill();

    Rectangle w14(0, 0, 50, 90);
    w14.moveTo(580, 330);
    w14.setColor(COLOR(21, 25, 0));
    w14.setFill();

    Rectangle w15(0, 0, 50, 90);
    w15.moveTo(580, 450);
    w15.setColor(COLOR(21, 25, 0));
    w15.setFill();

    Rectangle r6k(50, 0, 150, 400);
    r6k.moveTo(743, 400);
    r6k.setColor(COLOR(233, 166, 81));
    r6k.setFill();
    Rectangle r13k(50, 0, 150, 400);
    r13k.moveTo(743, 400);

    Rectangle w16(0, 0, 60, 50);
    w16.moveTo(715, 250);
    w16.setColor(COLOR(21, 25, 0));
    w16.setFill();

    Rectangle w17(0, 0, 60, 50);
    w17.moveTo(770, 350);
    w17.setColor(COLOR(21, 25, 0));
    w17.setFill();

    Rectangle w18(0, 0, 60, 50);
    w18.moveTo(715, 450);
    w18.setColor(COLOR(21, 25, 0));
    w18.setFill();

    Rectangle e4n(0, 0, 40, 50);
    e4n.moveTo(715, 250);
    e4n.setColor(COLOR(255, 255, 0));
    e4n.setFill();

    Rectangle e5n(0, 0, 40, 50);
    e5n.moveTo(770, 350);
    e5n.setColor(COLOR(255, 255, 0));
    e5n.setFill();

    Rectangle e6(0, 0, 40, 50);
    e6.moveTo(715, 450);
    e6.setColor(COLOR(255, 255, 0));
    e6.setFill();

    Rectangle r7k(80, 0, 190, 500);
    r7k.moveTo(930, 350);
    r7k.setColor(COLOR(189, 181, 213));
    r7k.setFill();
    Rectangle r14k(80, 0, 190, 500);
    r14k.moveTo(930, 350);

    Rectangle w19(0, 0, 70, 50);
    w19.moveTo(925, 150);
    w19.setColor(COLOR(21, 25, 0));
    w19.setFill();

    Rectangle w20(0, 0, 70, 50);
    w20.moveTo(925, 250);
    w20.setColor(COLOR(21, 25, 0));
    w20.setFill();

    Rectangle w21(0, 0, 70, 50);
    w21.moveTo(925, 350);
    w21.setColor(COLOR(21, 25, 0));
    w21.setFill();

    Rectangle w22(0, 0, 70, 50);
    w22.moveTo(925, 350);
    w22.setColor(COLOR(21, 25, 0));
    w22.setFill();

    Rectangle w23(0, 0, 70, 50);
    w23.moveTo(925, 450);
    w23.setColor(COLOR(21, 25, 0));
    w23.setFill();

    double an[][2] = {{0, 698}, {0, 649}, {99, 648}, {99, 549}, {199, 548}, {200, 449}, {300, 449}, {300, 350}, {399, 350}, {399, 718}};
    Polygon pk(0, 0, an, 10);
    pk.move(0, 30);
    pk.setColor(COLOR(128, 128, 128));
    pk.setFill();
    Polygon p1k(0, 0, an, 10);
    p1k.move(0, 30);

    Rectangle r15k(50, 0, 500, 200);
    r15k.moveTo(750, 600);
    r15k.setColor(COLOR(128, 128, 128));
    r15k.setFill();
    Rectangle r16k(50, 0, 500, 200);
    r16k.moveTo(750, 600);

    // projectile
    double effect[15][2] = {{100, 100}, {120, 50}, {130, 100}, {165, 75}, {145, 120}, {190, 140}, {140, 145}, {145, 180}, {120, 148}, {100, 175}, {103, 136}, {70, 130}, {95, 120}, {85, 75}, {100, 100}};
    Polygon pe(0, 0, effect, 15);
    pe.setColor(COLOR("yellow"));
    pe.setFill();
    pe.scale(0.2);
    pe.hide();

    // Boss
    // Legs
    double p1[8][2] = {{500, 500}, {500, 600}, {550, 600}, {600, 550}, {650, 600}, {700, 600}, {700, 500}, {500, 500}};
    Polygon P1(0, 0, p1, 8);
    P1.setColor(COLOR(69, 69, 69));
    P1.setFill();
    P1.scale(0.6);
    P1.moveTo(450, 140);
    Polygon P2(0, 0, p1, 8);
    P2.setColor(COLOR("black"));
    P2.scale(0.6);
    P2.moveTo(450, 140);

    // Body
    double b1[5][2] = {{400, 200}, {800, 200}, {700, 500}, {500, 500}, {400, 200}};
    Polygon B1(0, 0, b1, 5);
    B1.setColor(COLOR("black"));
    B1.setFill();
    B1.scale(0.6);
    B1.moveTo(450, 140);

    // Left Sleeve
    double sl9[5][2] = {{400, 200}, {300, 350}, {340, 365}, {430, 290}, {400, 200}};
    Polygon S1(0, 0, sl9, 5);
    S1.scale(0.6);
    S1.setColor(COLOR("black"));
    S1.setFill();
    S1.moveTo(450, 145);

    // Right Sleeve
    double sl2[5][2] = {{800, 200}, {900, 350}, {860, 365}, {770, 290}, {800, 200}};
    Polygon S2(0, 0, sl2, 5);
    S2.scale(0.6);
    S2.setColor(COLOR("red"));
    S2.setFill();
    S2.moveTo(450, 145);

    // Head
    Circle c1(810, 320, 24);
    c1.setColor(COLOR(232, 190, 172));
    c1.setFill();

    // Eyes
    Circle eb(800, 317, 4);
    eb.setColor(COLOR("white"));
    eb.setFill();

    Circle eb2(820, 317, 4);
    eb2.setColor(COLOR("white"));
    eb2.setFill();

    Circle eb3(798, 318, 2);
    eb3.setColor(COLOR("red"));
    eb3.setFill();

    Circle eb4(818, 318, 2);
    eb4.setColor(COLOR("red"));
    eb4.setFill();

    // Crown
    double cr1[10][2] = {{565, 215}, {565, 250}, {635, 250}, {635, 215}, {617, 238}, {609, 215}, {600, 238}, {591, 215}, {583, 238}, {565, 215}};
    Polygon C1(0, 0, cr1, 10);
    C1.setColor(COLOR(255, 215, 0));
    C1.setFill();
    C1.scale(0.6);
    C1.moveTo(450, 160);
    Polygon C2(0, 0, cr1, 10);
    C2.scale(0.6);
    C2.setColor(COLOR("red"));
    C2.moveTo(450, 160);

    // Tie
    double p9[6][2] = {{590, 320}, {610, 320}, {620, 450}, {600, 480}, {580, 450}, {590, 320}};
    Polygon p6(0, 0, p9, 6);
    p6.scale(0.6);
    p6.setColor(COLOR(255, 95, 31));
    p6.setFill();
    p6.moveTo(450, 160);

    // pipe
    Rectangle r(190, 220, 200, 10);
    r.setColor(COLOR(165, 42, 42));
    r.setFill();
    r.rotate(60);
    r.moveTo(625, 360);

    endFrame();

    // main character
    // Wizard
    // hand

    beginFrame();
    Rectangle wizardhand(100, 170, 24, 12);
    wizardhand.rotate(210);
    wizardhand.setColor(COLOR(128, 0, 128));
    wizardhand.setFill();

    // dress
    double h[17][2] = {{225, 225}, {150, 250}, {160, 270}, {180, 260}, {125, 400}, {153, 370}, {181, 400}, {209, 370}, {237, 400}, {265, 370}, {293, 400}, {315, 370}, {325, 400}, {270, 260}, {320, 270}, {330, 250}, {225, 225}};
    Polygon d(0, 7, h, 10);
    d.setColor(COLOR(190, 0, 128));
    d.setFill();
    d.scale(0.6);

    // face
    Circle wizardface(133, 133, 18);
    wizardface.setColor(COLOR(232, 190, 172));
    wizardface.setFill();

    // eyes
    Circle e3(128, 130, 4);
    e3.setColor(COLOR("white"));
    e3.setFill();

    Circle e2(142, 130, 4);
    e2.setColor(COLOR("white"));
    e2.setFill();

    Circle e4(130, 132, 2);
    e4.setColor(COLOR("black"));
    e4.setFill();

    Circle e5(144, 132, 2);
    e5.setColor(COLOR("black"));
    e5.setFill();

    // Hat
    double a[4][2] = {{116, 122}, {150, 122}, {104, 68}, {116, 122}};
    Polygon p(0, 0, a, 4);
    p.setColor(COLOR(128, 0, 128));
    p.setFill();

    // star
    double z[6][2] = {{110, 100}, {190, 100}, {125, 150}, {150, 65}, {175, 150}, {110, 100}};
    Polygon s(0, 0, z, 6);
    s.setColor(COLOR("yellow"));
    s.setFill();
    s.scale(0.18);
    s.moveTo(106, 143);

    Polygon s1(0, 0, z, 6);
    s1.setColor(COLOR("yellow"));
    s1.setFill();
    s1.scale(0.18);
    s1.moveTo(88, 160);

    Polygon s2(0, 0, z, 6);
    s2.setColor(COLOR("yellow"));
    s2.setFill();
    s2.scale(0.18);
    s2.moveTo(111, 206);

    Polygon s3(0, 0, z, 6);
    s3.setColor(COLOR("yellow"));
    s3.setFill();
    s3.scale(0.18);
    s3.moveTo(85, 206);

    Polygon s4(0, 0, z, 6);
    s4.setColor(COLOR("yellow"));
    s4.setFill();
    s4.scale(0.18);
    s4.moveTo(110, 175);

    Polygon s5(0, 0, z, 6);
    s5.setColor(COLOR("yellow"));
    s5.setFill();
    s5.scale(0.18);
    s5.moveTo(80, 185);

    wizardhand.move(0, 300);
    wizardface.move(0, 300);
    d.move(0, 300);
    e2.move(0, 300);
    e3.move(0, 300);
    e4.move(0, 300);
    e5.move(0, 300);
    p.move(0, 300);
    s.move(0, 300);
    s1.move(0, 300);
    s2.move(0, 300);
    s3.move(0, 300);
    s4.move(0, 300);
    s5.move(0, 300);

    endFrame();

    Text tmc(150, 300, "So it was you! You're the fool trying to ");
    Text tmc1(150, 320, "meddle with spacetime for your own profit.");
    getch();
    tmc.hide();
    tmc1.hide();
    Text tbc(750, 200, "Woah there. It seems that the vision of the Evil Corporation is");
    Text tbca(750, 220, "far beyond lost to your dull mind. We're trying to improve this universe!");
    getch();
    tbc.hide();
    tbca.hide();
    Text tmc2(150, 320, "Don't you realise how stupid and ");
    Text tmc2a(150, 340, "dangerous all this is?");
    getch();
    tmc2.hide();
    tmc2a.hide();
    Text tbc2(750, 200, "Ugh, you sound like my mumma. If she sent you,");
    Text tbc2a(750, 220, "tell her I'll be home before dinner time.");
    getch();
    tbc2.hide();
    tbc2a.hide();
    Text tmc3(150, 300, "What? NO, you dimwit.");
    Text tmc3a(150, 320, "You're putting the entire universe in danger!");
    getch();
    tmc3.hide();
    tmc3a.hide();
    Text tbc3(750, 200, "Yeah, you see, the problem with that is that I don't");
    Text tbc3a(750, 220, "really care about the universe. All I care about is making money!");
    getch();
    tbc3.hide();
    tbc3a.hide();
    Text tmc4(150, 320, "Well then, you see, I have no choice but to");
    Text tmc4a(150, 340, "stop you and put an end to this madness.");
    getch();
    tmc4.hide();
    tmc4a.hide();
    getch();
    Text tbc4(800, 240, "Hahahahaha. Fool. I'd like to see you try.");
    getch();
    tbc4.hide();

    XEvent e;

start:
    int mcx, mcy;

    mcx = wizardhand.getX();
    mcy = wizardhand.getY();

    /*int zk=getClick();
    int x=zk/65536;
    int y=zk%65536;
    cout<<"x="<<x<<" y="<<y;*/

    int ebx = B1.getX();
    int eby = B1.getY();

    int bx, by;
    int bosshp = 5;
    Rectangle hp(810, 230, 100, 10);
    hp.setColor(COLOR(34, 139, 34));
    hp.setFill();
    Rectangle hpb(810, 230, 100, 10);

    XEvent f;

    while (flag == 3)
    {
        nextEvent(f);

        switch (charFromEvent(f))
        {
        // move up with w
        case 119:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();

            break;

        // move left with a
        case 97:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();
            break;

        // move down with s
        case 115:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();
            break;

        // move right with d
        case 100:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();

            break;

        // move up with W
        case 87:

            beginFrame();
            wizardhand.move(0, -30);
            wizardface.move(0, -30);
            d.move(0, -30);
            e2.move(0, -30);
            e3.move(0, -30);
            e4.move(0, -30);
            e5.move(0, -30);
            p.move(0, -30);
            s.move(0, -30);
            s1.move(0, -30);
            s2.move(0, -30);
            s3.move(0, -30);
            s4.move(0, -30);
            s5.move(0, -30);

            endFrame();
            break;

        // move left with A
        case 65:
            beginFrame();
            wizardhand.move(-30, 0);
            wizardface.move(-30, 0);
            d.move(-30, 0);
            e2.move(-30, 0);
            e3.move(-30, 0);
            e4.move(-30, 0);
            e5.move(-30, 0);
            p.move(-30, 0);
            s.move(-30, 0);
            s1.move(-30, 0);
            s2.move(-30, 0);
            s3.move(-30, 0);
            s4.move(-30, 0);
            s5.move(-30, 0);

            endFrame();

            break;

        // move down with S
        case 83:
            beginFrame();

            wizardhand.move(0, 30);
            wizardface.move(0, 30);
            d.move(0, 30);
            e2.move(0, 30);
            e3.move(0, 30);
            e4.move(0, 30);
            e5.move(0, 30);
            p.move(0, 30);
            s.move(0, 30);
            s1.move(0, 30);
            s2.move(0, 30);
            s3.move(0, 30);
            s4.move(0, 30);
            s5.move(0, 30);

            endFrame();

            break;

        // move right with D
        case 68:
            beginFrame();

            wizardhand.move(30, 0);
            wizardface.move(30, 0);
            d.move(30, 0);
            e2.move(30, 0);
            e3.move(30, 0);
            e4.move(30, 0);
            e5.move(30, 0);
            p.move(30, 0);
            s.move(30, 0);
            s1.move(30, 0);
            s2.move(30, 0);
            s3.move(30, 0);
            s4.move(30, 0);
            s5.move(30, 0);

            endFrame();
            break;

        // jump with E
        case 69:
            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 50);
            wizardface.move(0, 50);
            d.move(0, 50);
            e2.move(0, 50);
            e3.move(0, 50);
            e4.move(0, 50);
            e5.move(0, 50);
            p.move(0, 50);
            s.move(0, 50);
            s1.move(0, 50);
            s2.move(0, 50);
            s3.move(0, 50);
            s4.move(0, 50);
            s5.move(0, 50);

            endFrame();
            break;

        // shoot with F
        case 70:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < ebx)
                {
                    pe.move(10, 0);
                }
                else if ((by >= 230 && by <= 480) && bx == 750)
                {
                    Text t10(600, 600, "HIT");
                    Text t80(700, 300, "HIT!");
                    Text t12(800, 400, "-10 HP");
                    wait(0.1);
                    Text t15(850, 450, "-10 HP");

                    bosshp--;

                    if (bosshp == 4)
                    {
                        Text er(810, 230, "HP=80");
                        /*Rectangle h1(850,230,20,10);
                        h1.setColor(COLOR("red"));
                        h1.setFill();*/
                        wait(1);
                        break;
                        // hp.hide();
                    }

                    else if (bosshp == 3)
                    {
                        Text er1(810, 230, "HP=60");
                        wait(1);
                        /*Rectangle h2(840,230,40,10);
                        h2.setColor(COLOR("red"));
                        h2.setFill();*/
                        break;
                    }

                    else if (bosshp == 2)
                    {
                        Text er2(810, 230, "HP=40");
                        wait(1);
                        /*Rectangle h3(830,230,60,10);
                        h3.setColor(COLOR("red"));
                        h3.setFill();*/
                        break;
                    }

                    else if (bosshp == 1)
                    {
                        Text er3(810, 230, "HP=20");
                        wait(1);
                        /*Rectangle h4(820,230,80,10);
                        h4.setColor(COLOR("red"));
                        h4.setFill();*/
                        break;
                    }
                    else if (bosshp == 0)
                    {
                        Rectangle h5(810, 230, 100, 10);
                        h5.setColor(COLOR("red"));
                        h5.setFill();
                        pe.hide();
                        pe.moveTo(0, 0);
                        wait(0.09);
                        Text t10(600, 600, "HIT");

                        h5.hide();
                        P1.hide();
                        P2.hide();
                        B1.hide();
                        S1.hide();
                        S2.hide();
                        c1.hide();
                        eb.hide();
                        eb2.hide();
                        eb3.hide();
                        eb4.hide();
                        C1.hide();
                        C2.hide();
                        p6.hide();
                        r.hide();

                        wait(0.05);
                        B1.show();
                        S1.show();
                        S2.show();

                        Text t8(680, 350, "HIT!");
                        S1.hide();
                        B1.hide();
                        S2.show();
                        wait(0.05);
                        p6.hide();
                        wait(0.05);
                        p6.show();
                        wait(0.05);
                        p6.hide();
                        S2.hide();
                        // hp.hide();
                        // hpb.hide();
                        break;
                    }
                    else
                        break;
                }

                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                    }
                }
            }
            break;

        // jump with e
        case 101:

            // move up
            beginFrame();
            wizardhand.move(0, -120);
            wizardface.move(0, -120);
            d.move(0, -120);
            e2.move(0, -120);
            e3.move(0, -120);
            e4.move(0, -120);
            e5.move(0, -120);
            p.move(0, -120);
            s.move(0, -120);
            s1.move(0, -120);
            s2.move(0, -120);
            s3.move(0, -120);
            s4.move(0, -120);
            s5.move(0, -120);

            endFrame();

            wait(0.005);

            // move forward
            beginFrame();

            wizardhand.move(100, 0);
            wizardface.move(100, 0);
            d.move(100, 0);
            e2.move(100, 0);
            e3.move(100, 0);
            e4.move(100, 0);
            e5.move(100, 0);
            p.move(100, 0);
            s.move(100, 0);
            s1.move(100, 0);
            s2.move(100, 0);
            s3.move(100, 0);
            s4.move(100, 0);
            s5.move(100, 0);

            endFrame();

            wait(0.005);

            // move down
            beginFrame();

            wizardhand.move(0, 50);
            wizardface.move(0, 50);
            d.move(0, 50);
            e2.move(0, 50);
            e3.move(0, 50);
            e4.move(0, 50);
            e5.move(0, 50);
            p.move(0, 50);
            s.move(0, 50);
            s1.move(0, 50);
            s2.move(0, 50);
            s3.move(0, 50);
            s4.move(0, 50);
            s5.move(0, 50);

            endFrame();

            break;

        // shoot with f
        case 102:

            mcx = wizardhand.getX();
            mcy = wizardhand.getY();

            pe.show();
            pe.moveTo(mcx + 60, mcy);

            for (int i = mcx; i < 1400; i++)
            {
                bx = pe.getX();
                by = pe.getY();

                if (bx < ebx)
                {
                    pe.move(10, 0);
                }
                else if ((by >= 230 && by <= 480) && bx == 750)
                {
                    Text t10(600, 600, "HIT");
                    Text t80(680, 350, "HIT!");

                    bosshp--;

                    if (bosshp == 4)
                    {

                        Rectangle h1(850, 230, 20, 10);
                        h1.setColor(COLOR("red"));
                        h1.setFill();

                        wait(0.5);
                        break;
                    }

                    else if (bosshp == 3)
                    {

                        Rectangle h2(840, 230, 40, 10);
                        h2.setColor(COLOR("red"));
                        h2.setFill();
                        break;
                    }

                    else if (bosshp == 2)
                    {
                        Rectangle h3(830, 230, 60, 10);
                        h3.setColor(COLOR("red"));
                        h3.setFill();
                        break;
                    }

                    else if (bosshp == 1)
                    {
                        Rectangle h4(820, 230, 80, 10);
                        h4.setColor(COLOR("red"));
                        h4.setFill();
                        break;
                    }
                    else if (bosshp == 0)
                    {
                        Rectangle h5(810, 230, 100, 10);
                        h5.setColor(COLOR("red"));
                        h5.setFill();
                        pe.hide();
                        pe.moveTo(0, 0);
                        wait(0.09);
                        Text t10(600, 600, "HIT");

                        P1.hide();
                        P2.hide();
                        B1.hide();
                        S1.hide();
                        S2.hide();
                        c1.hide();
                        eb.hide();
                        eb2.hide();
                        eb3.hide();
                        eb4.hide();
                        C1.hide();
                        C2.hide();
                        p6.hide();
                        r.hide();

                        wait(0.05);
                        B1.show();
                        S1.show();
                        S2.show();

                        Text t8(680, 350, "HIT!");
                        S1.hide();
                        B1.hide();
                        S2.show();
                        wait(0.05);
                        p6.hide();
                        wait(0.05);
                        p6.show();
                        wait(0.05);
                        p6.hide();
                        S2.hide();
                        hp.hide();
                        hpb.hide();
                        flag++;
                        break;

                        break;
                    }
                    else
                        break;
                }

                else
                {
                    pe.move(10, 0);
                    if (bx > 1000)
                    {
                        pe.hide();
                        pe.moveTo(0, 0);
                        break;
                    }
                }
            }
        }
    }
}

main_program
{

    titlescreen();

    if (flag == 0)
    {
        level1();
    }

    if (flag == 1)
    {
        level2();
    }

    if (flag == 2)
    {

        level3();
    }

    if (flag == 3)
    {

        level4();
    }
    if (flag == 4)
    {

        Text tend(500, 330, "Thanks to you, the Wizard has successfully beaten the Evil Corporation and restored ");
        Text tend1(500, 350, "the stability of Spacetime! Thank you for playing, press any key to exit.");

        wait(2);

        getch();
        exit(1);
    }
}