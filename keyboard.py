import pyautogui #required to do operations with keyboard buttons
import time #used to keep delay functions
import serial #used for arduino serial communication
arduinoSerial=serial.Serial('COM3',115200)#to bring serial data from serial moniter
time.sleep(2) #sleep for two seconds
while 1:
  insert=arduinoSerial.readline() #read the serial and store that in read
  read =insert.decode('ASCII')
  print(read)
  if read=='lefton\r\n':
    pyautogui.press('left')
  if read=='backwardon\r\n':
    pyautogui.press('down')
  if read=='forwardon\r\n':
    pyautogui.press('up')
  if read=='righton\r\n' :
    pyautogui.press('right')
  if read=='enteron\r\n':
    pyautogui.press('enter')
  if read=='ctrlon\r\n':
    pyautogui.press('ctrlleft')
  if read=='spaceon\r\n':
    pyautogui.press('space')
  if read=='alton\r\n':
    pyautogui.press('altleft')
  if read=='mouseFon\r\n':
    pyautogui.moveRel(0, -17, duration=0)
  if read=='mouseBon\r\n':
    pyautogui.moveRel(0, 17, duration=0)
  if read=='mouseLon\r\n':
    pyautogui.moveRel(-17, 0, duration=0)
  if read=='mouseRon\r\n':
    pyautogui.moveRel(17, 0, duration=0)
  if read=='onM\r\n':
    pyautogui.press('backspace')
  if read=='num\r\n':
    pyautogui.press('capslock')
  if read=='mousePon\r\n':
    width,height=pyautogui.position()
    pyautogui.doubleClick(width, height)    
  if read=='a\r\n':
    pyautogui.press('a')
  if read=='b\r\n':
    pyautogui.press('b')
  if read=='c\r\n':
    pyautogui.press('c')
  if read=='d\r\n':
    pyautogui.press('d')
  if read=='e\r\n':
    pyautogui.press('e')
  if read=='f\r\n':
    pyautogui.press('f')
  if read=='g\r\n':
    pyautogui.press('g')
  if read=='h\r\n':
    pyautogui.press('h')
  if read=='i\r\n':
    pyautogui.press('i')
  if read=='j\r\n':
    pyautogui.press('j')
  if read=='k\r\n':
    pyautogui.press('k')
  if read=='l\r\n':
    pyautogui.press('l')
  if read=='m\r\n':
    pyautogui.press('m')
  if read=='n\r\n':
    pyautogui.press('n')
  if read=='o\r\n':
    pyautogui.press('o')
  if read=='p\r\n':
    pyautogui.press('p')
  if read=='q\r\n':
    pyautogui.press('q')
  if read=='r\r\n':
    pyautogui.press('r')
  if read=='s\r\n':
    pyautogui.press('s')
  if read=='t\r\n':
    pyautogui.press('t')
  if read=='u\r\n':
    pyautogui.press('u')
  if read=='v\r\n':
    pyautogui.press('v')
  if read=='w\r\n':
    pyautogui.press('w')
  if read=='x\r\n':
    pyautogui.press('x')
  if read=='y\r\n':
    pyautogui.press('y')
  if read=='z\r\n':
    pyautogui.press('z')
  if read=='1\r\n':
    pyautogui.press('1')
  if read=='2\r\n':
    pyautogui.press('2')
  if read=='3\r\n':
    pyautogui.press('3')
  if read=='4\r\n':
    pyautogui.press('4')
  if read=='5\r\n':
    pyautogui.press('5')
  if read=='6\r\n':
    pyautogui.press('6')
  if read=='7\r\n':
    pyautogui.press('7')
  if read=='8\r\n':
    pyautogui.press('8')
  if read=='9\r\n':
    pyautogui.press('9')
  if read=='0\r\n':
    pyautogui.press('0')
  if read=='F1\r\n':
    pyautogui.press('f1')
  if read=='F2\r\n':
    pyautogui.press('f2')
  if read=='F3\r\n':
    pyautogui.press('f3')
  if read=='F4\r\n':
    pyautogui.press('f4')
  if read=='F5\r\n':
    pyautogui.press('f5')
  if read=='F6\r\n':
    pyautogui.press('f6')
  if read=='F7\r\n':
    pyautogui.press('f7')
  if read=='F8\r\n':
    pyautogui.press('f8')
  if read=='F9\r\n':
    pyautogui.press('f9')
  if read=='F10\r\n':
    pyautogui.press('f10')
  if read=='F11\r\n':
    pyautogui.press('f11')
  if read=='F12\r\n':
    pyautogui.press('f12')
  if read=='@\r\n':
    pyautogui.press('@')
  if read=='!\r\n':
    pyautogui.press('!')
  if read=='#\r\n':
    pyautogui.press('#')
  if read=='%\r\n':
    pyautogui.press('%')
  if read=='^\r\n':
    pyautogui.press('^')
  if read=='&\r\n':
    pyautogui.press('&')
  if read=='*\r\n':
    pyautogui.press('*')
  if read=='(\r\n':
    pyautogui.press('(')
  if read=='_\r\n':
    pyautogui.press('_')
  if read=='+\r\n':
    pyautogui.press('+')
  if read=='-\r\n':
    pyautogui.press('-')
  if read=='=\r\n':
    pyautogui.press('=')
  if read=='<\r\n':
    pyautogui.press('<')
  if read=='>\r\n':
    pyautogui.press('>')
  if read=='?\r\n':
    pyautogui.press('?')
  if read==':\r\n':
    pyautogui.press(':')
  if read=='quote\r\n':
    pyautogui.press('"')
  if read=='.\r\n':
    pyautogui.press('.')
  if read=='{\r\n':
    pyautogui.press('{')
  if read=='}\r\n':
    pyautogui.press('}')
  if read=='[\r\n':
    pyautogui.press('[')
  if read==']\r\n':
    pyautogui.press(']')
  if read==';\r\n':
    pyautogui.press(';')
  if read=='/\r\n':
    pyautogui.press('/')
  if read=='backslash\r\n':
    pyautogui.press('\\')
  if read=='esc\r\n':
    pyautogui.press('esc')
  if read=='tab\r\n':
    pyautogui.press('\t')
  if read=='dash\r\n':
    pyautogui.press('')
  if read==')\r\n':
    pyautogui.press(')')
  if read=='$\r\n':
    pyautogui.press('$')
  if read=='RS\r\n':
    pyautogui.moveRel(25, 0, duration=0)
  if read=='LS\r\n':
    pyautogui.moveRel(-25, 0, duration=0)
  if read=='mouseRPon\r\n':
    width1,height1=pyautogui.position()
    pyautogui.click(width1, height1, button='right') 
  if read=='computer\r\n':
    a,b,c,d= pyautogui.locateOnScreen('computer.png')
    lm,lh=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='cortana\r\n':
    p1,p2,p3,p4=pyautogui.locateOnScreen('cortana.png')
    p5,p6=pyautogui.center((p1,p2,p3,p4))
    pyautogui.click(p5,p6)
  if read=='desktop\r\n':
    g1,g2,g3,g4=pyautogui.locateOnScreen('desktop.png')
    g5,g6=pyautogui.center((g1,g2,g3,g4))
    pyautogui.click(g5,g6)
  if read=='documents\r\n':
    w1,w2,w3,w4=pyautogui.locateOnScreen('documents.png')
    w5,w6=pyautogui.center((w1,w2,w3,w4))
    pyautogui.click(w5,w6)
  if read=='pictures\r\n':
    r1,r2,r3,r4=pyautogui.locateOnScreen('pictures.png')
    r5,r6=pyautogui.center((r1,r2,r3,r4))
    pyautogui.click(r5,r6)
  if read=='firefox\r\n':
    u,v,w,x=pyautogui.locateOnScreen('mozilla.png')
    gh,gp=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='videos\r\n':
    u1,u2,u3,u4=pyautogui.locateOnScreen('videos.png')
    u6,u5=pyautogui.center((u1,u2,u3,u4))
    pyautogui.click(u5,u6)
  if read=='exit\r\n':
    pyautogui.hotkey('altleft','f4')
  if read=='minimize\r\n':
    pyautogui.hotkey('win','down')
  if read=='zoom\r\n':
    pyautogui.hotkey('shift','win','down')
  if read=='chrome\r\n':
    pl,po,pk,pu=pyautogui.locateOnScreen('windows.png')
    qw,qs=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='windows\r\n':
    pyautogui.press('win')
  if read=='wifi\r\n':
    ou,ot,oy,ow=pyautogui.locateOnScreen('wifi.png')
    bx,bz=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='battery\r\n':
    rw,rd,rt,ry= pyautogui.locateOnScreen('battery.png')
    fq,fw=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='sound\r\n':
    sd,sf,sx,sv=pyautogui.locateOnScreen('sound.png')
    xz,xc=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='file\r\n':
    d1,d2,d3,d4=pyautogui.locateOnScreen('file.png')
    d5,d6=pyautogui.center((d1,d2,d3,d4))
    pyautogui.click(d5,d6)
  if read=='local disk c\r\n':
    m1,m2,m3,m4=pyautogui.locateOnScreen('local disk c.png')
    m5,m6=pyautogui.center((m1,m2,m3,m4))
    pyautogui.click(m5,m6)
  if read=='local disk d\r\n':
    z1,z2,z3,z4=pyautogui.locateOnScreen('local disk d.png')
    z5,z6=pyautogui.center((z1, z2, z3, z4))
    pyautogui.click(z5, z6)
  if read=='local disk e\r\n':
    x1,x2,x3,x4=pyautogui.locateOnScreen('local disk e.png')
    x5,x6=pyautogui.center((x1, x2, x3, x4))
    pyautogui.click((x5, x6))
  if read=='shutdown\r\n':
    j1,j2,j3,j4=pyautogui.locateOnScreen('shutdown.png')
    j5,j6=pyautogui.center((1318, 734, 33, 25))
    pyautogui.click(1334, 746)
  if read=='sleep\r\n':
    k1,k2,k3,k4=pyautogui.locateOnScreen('sleep.png')
    k5,k6=pyautogui.center((k1,k2,k3,k4))
    pyautogui.click(k5,k6)
  if read=='music\r\n':
    s1,s2,s3,s4=pyautogui.locateOnScreen('music.png')
    s5,s6=pyautogui.center((s1, s2, s3, s4))
    pyautogui.click(s5, s6)
  if read=='restart\r\n':
    e1,e2,e3,e4=pyautogui.locateOnScreen('restart.png')
    e5,e6=pyautogui.center((e1,e2,e3,e4))
    pyautogui.click(e5,e6)
    

        