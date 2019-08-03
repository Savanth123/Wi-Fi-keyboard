#include <ESP8266WiFi.h>

const char* ssid     = "sav";// Giving hotsopt name
const char* password = "savanth123";// Hotspot password

// Set web server port number to 80
WiFiServer server(80);

// Variable to store the HTTP request
String header;

void setup() {
  Serial.begin(115200);
 // Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
}

void loop(){
  WiFiClient client = server.available();   // It will return no. of bytes to read

  if (!client) {
    return;
  }
 // print a message out in the serial port
 // make a String to hold incoming data from the client
    while (!client.connected()) {  
      delay(1);
    }
    // loop while the client's connected
    String header =client.readStringUntil('\r');
   
            
            if (header.indexOf("GET /1/on") >= 0)
            {
              Serial.println("lefton");  
              delay(100);  
            }
            if (header.indexOf("GET /2/on") >= 0)
            {
              Serial.println("backwardon");
              delay(100);
            }
            if (header.indexOf("GET /3/on") >= 0) 
            {
              Serial.println("forwardon");
              delay(100);
            }
        
            if (header.indexOf("GET /4/on") >= 0) 
            {
              Serial.println("righton");
              delay(100);
            }
            
            if (header.indexOf("GET /5/on") >= 0)
            {
              Serial.println("enteron");
              delay(100);
            } 
       
            if (header.indexOf("GET /6/on") >= 0)
            {
              Serial.println("ctrlon");
              delay(100);
            }
       
            if (header.indexOf("GET /7/on") >= 0) 
            {
              Serial.println("shifton");
              delay(100);
            }
         
            if (header.indexOf("GET /8/on") >= 0)
            {
              Serial.println("spaceon");
              delay(100);
            }

            if (header.indexOf("GET /9/on") >= 0) 
            {
              Serial.println("alton");
              delay(100);
            } 
 
            if (header.indexOf("GET /11/on") >= 0)
            {
              Serial.println("mouseLon");
              delay(100);
            }

            if (header.indexOf("GET /12/on") >= 0)
            {
              Serial.println("mouseBon");
              delay(100);
            } 

            if (header.indexOf("GET /13/on") >= 0)
            {
              Serial.println("mouseFon");
              delay(100);
            }

            if (header.indexOf("GET /14/on") >= 0) 
            {
              Serial.println("mouseRon");
              delay(100);
            } 

            if (header.indexOf("GET /15/on") >= 0) 
            {
              Serial.println("mousePon");
              delay(100);
            }
             
            if (header.indexOf("GET /16/on") >= 0) 
            {
              Serial.println("onM");
              delay(100);
            }
            
            if (header.indexOf("GET /17/on") >= 0) 
            {
              Serial.println("num");
              delay(100);
            }
            if (header.indexOf("GET /18/on") >= 0) 
            {
              Serial.println("a");
              delay(100);
            }
            if (header.indexOf("GET /19/on") >= 0) 
            {
              Serial.println("b");
              delay(100);
            }
            if (header.indexOf("GET /20/on") >= 0) 
            {
              Serial.println("c");
              delay(100);
            }
            if (header.indexOf("GET /21/on") >= 0) 
            {
              Serial.println("d");
              delay(100);
            }
            if (header.indexOf("GET /28/on") >= 0) 
            {
              Serial.println("e");
              delay(100);
            }
            if (header.indexOf("GET /29/on") >= 0) 
            {
              Serial.println("f");
              delay(100);
            }
            if (header.indexOf("GET /24/on") >= 0) 
            {
              Serial.println("g");
              delay(100);
            }
            if (header.indexOf("GET /25/on") >= 0) 
            {
              Serial.println("h");
              delay(100);
            }
            if (header.indexOf("GET /26/on") >= 0) 
            {
              Serial.println("i");
              delay(100);
            }
            if (header.indexOf("GET /27/on") >= 0) 
            {
              Serial.println("j");
              delay(100);
            }
            if (header.indexOf("GET /30/on") >= 0) 
            {
              Serial.println("k");
              delay(100);
            }
            if (header.indexOf("GET /31/on") >= 0) 
            {
              Serial.println("l");
              delay(100);
            }
            if (header.indexOf("GET /32/on") >= 0) 
            {
              Serial.println("m");
              delay(100);
            }
            if (header.indexOf("GET /33/on") >= 0) 
            {
              Serial.println("n");
              delay(100);
            }
            if (header.indexOf("GET /34/on") >= 0) 
            {
              Serial.println("o");
              delay(100);
            }
            if (header.indexOf("GET /35/on") >= 0) 
            {
              Serial.println("p");
              delay(100);
            }
            if (header.indexOf("GET /36/on") >= 0) 
            {
              Serial.println("q");
              delay(100);
            }
            if (header.indexOf("GET /37/on") >= 0) 
            {
              Serial.println("r");
              delay(100);
            }
            if (header.indexOf("GET /38/on") >= 0) 
            {
              Serial.println("s");
              delay(100);
            }
            if (header.indexOf("GET /39/on") >= 0) 
            {
              Serial.println("t");
              delay(100);
            }
            if (header.indexOf("GET /40/on") >= 0) 
            {
              Serial.println("u");
              delay(100);
            }
            if (header.indexOf("GET /41/on") >= 0) 
            {
              Serial.println("v");
              delay(100);
            }
            if (header.indexOf("GET /42/on") >= 0) 
            {
              Serial.println("w");
              delay(100);
            }
            if (header.indexOf("GET /43/on") >= 0) 
            {
              Serial.println("x");
              delay(100);
            }
            if (header.indexOf("GET /44/on") >= 0) 
            {
              Serial.println("y");
              delay(100);
            }
            if (header.indexOf("GET /45/on") >= 0) 
            {
              Serial.println("z");
              delay(100);
            }
            if (header.indexOf("GET /46/on") >= 0) 
            {
              Serial.println("1");
              delay(100);
            }
            if (header.indexOf("GET /47/on") >= 0) 
            {
              Serial.println("2");
              delay(100);
            }
            if (header.indexOf("GET /48/on") >= 0) 
            {
              Serial.println("3");
              delay(100);
            }
            if (header.indexOf("GET /49/on") >= 0) 
            {
              Serial.println("4");
              delay(100);
            }
            if (header.indexOf("GET /50/on") >= 0) 
            {
              Serial.println("5");
              delay(100);
            }
            if (header.indexOf("GET /51/on") >= 0) 
            {
              Serial.println("6");
              delay(100);
            }
            if (header.indexOf("GET /52/on") >= 0) 
            {
              Serial.println("7");
              delay(100);
            }
            if (header.indexOf("GET /53/on") >= 0) 
            {
              Serial.println("8");
              delay(100);
            }
            if (header.indexOf("GET /54/on") >= 0) 
            {
              Serial.println("9");
              delay(100);
            }
            if (header.indexOf("GET /55/on") >= 0) 
            {
              Serial.println("0");
              delay(100);
            }
            if (header.indexOf("GET /56/on") >= 0) 
            {
              Serial.println("F1");
              delay(100);
            }
            if (header.indexOf("GET /57/on") >= 0) 
            {
              Serial.println("F2");
              delay(100);
            }
            if (header.indexOf("GET /58/on") >= 0) 
            {
              Serial.println("F3");
              delay(100);
            }
            if (header.indexOf("GET /59/on") >= 0) 
            {
              Serial.println("F4");
              delay(100);
            }
            if (header.indexOf("GET /60/on") >= 0) 
            {
              Serial.println("F5");
              delay(100);
            }
            if (header.indexOf("GET /61/on") >= 0) 
            {
              Serial.println("F6");
              delay(100);
            }
            if (header.indexOf("GET /62/on") >= 0) 
            {
              Serial.println("F7");
              delay(100);
            }
            if (header.indexOf("GET /63/on") >= 0) 
            {
              Serial.println("F8");
              delay(100);
            }
            if (header.indexOf("GET /64/on") >= 0) 
            {
              Serial.println("F9");
              delay(100);
            }
            if (header.indexOf("GET /65/on") >= 0) 
            {
              Serial.println("F10");
              delay(100);
            }
            if (header.indexOf("GET /66/on") >= 0) 
            {
              Serial.println("F11");
              delay(100);
            }
            if (header.indexOf("GET /67/on") >= 0) 
            {
              Serial.println("F12");
              delay(100);
            }
            if (header.indexOf("GET /68/on") >= 0) 
            {
              Serial.println("@");
              delay(100);
            }
            if (header.indexOf("GET /69/on") >= 0) 
            {
              Serial.println("!");
              delay(100);
            }
            if (header.indexOf("GET /70/on") >= 0) 
            {
              Serial.println("#");
              delay(100);
            }
            if (header.indexOf("GET /71/on") >= 0) 
            {
              Serial.println("$");
              delay(100);
            }
            if (header.indexOf("GET /72/on") >= 0) 
            {
              Serial.println("%");
              delay(100);
            }
            if (header.indexOf("GET /73/on") >= 0) 
            {
              Serial.println("^");
              delay(100);
            }
            if (header.indexOf("GET /74/on") >= 0) 
            {
              Serial.println("&");
              delay(100);
            }
            if (header.indexOf("GET /75/on") >= 0) 
            {
              Serial.println("*");
              delay(100);
            }
            if (header.indexOf("GET /76/on") >= 0) 
            {
              Serial.println("(");
              delay(100);
            }
            if (header.indexOf("GET /77/on") >= 0) 
            {
              Serial.println(")");
              delay(100);
            }
            if (header.indexOf("GET /78/on") >= 0) 
            {
              Serial.println("_");
              delay(100);
            }
            if (header.indexOf("GET /79/on") >= 0) 
            {
              Serial.println("+");
              delay(100);
            }
            if (header.indexOf("GET /80/on") >= 0) 
            {
              Serial.println("-");
              delay(100);
            }
            if (header.indexOf("GET /81/on") >= 0) 
            {
              Serial.println("=");
              delay(100);
            }
            if (header.indexOf("GET /82/on") >= 0) 
            {
              Serial.println("<");
              delay(100);
            }
            if (header.indexOf("GET /83/on") >= 0) 
            {
              Serial.println(">");
              delay(100);
            }
            if (header.indexOf("GET /84/on") >= 0) 
            {
              Serial.println("?");
              delay(100);
            }
            if (header.indexOf("GET /85/on") >= 0) 
            {
              Serial.println(":");
              delay(100);
            }
            if (header.indexOf("GET /86/on") >= 0) 
            {
              Serial.println("quote");
              delay(100);
            }
            if (header.indexOf("GET /87/on") >= 0) 
            {
              Serial.println(".");
              delay(100);
            }
            if (header.indexOf("GET /88/on") >= 0) 
            {
              Serial.println("{");
              delay(100);
            }
            if (header.indexOf("GET /89/on") >= 0) 
            {
              Serial.println("}");
              delay(100);
            }
            if (header.indexOf("GET /90/on") >= 0) 
            {
              Serial.println("[");
              delay(100);
            }
            if (header.indexOf("GET /91/on") >= 0) 
            {
              Serial.println("]");
              delay(100);
            }
            if (header.indexOf("GET /92/on") >= 0) 
            {
              Serial.println(";");
              delay(100);
            }
            if (header.indexOf("GET /93/on") >= 0) 
            {
              Serial.println("/");
              delay(100);
            }
            if (header.indexOf("GET /94/on") >= 0) 
            {
              Serial.println("backslash");
              delay(100);
            }
            if (header.indexOf("GET /95/on") >= 0) 
            {
              Serial.println("esc");
              delay(100);
            }
            if (header.indexOf("GET /96/on") >= 0) 
            {
              Serial.println("tab");
              delay(100);
            }
            if (header.indexOf("GET /97/on") >= 0) 
            {
              Serial.println("dash");
              delay(100);
            }
            if (header.indexOf("GET /100/on") >= 0) 
            {
              Serial.println("RS");
              delay(100);
            }
            if (header.indexOf("GET /101/on") >= 0) 
            {
              Serial.println("LS");
              delay(100);
            }
            if (header.indexOf("GET /103/on") >= 0) 
            {
              Serial.println("mouseRPon");
              delay(100);
            }
            if (header.indexOf("GET /102c/on") >= 0) 
            {
              Serial.println("desktop");
              delay(100);
            }
            if (header.indexOf("GET /102d/on") >= 0) 
            {
              Serial.println("documents");
              delay(100);
            }
            if (header.indexOf("GET /102e/on") >= 0) 
            {
              Serial.println("pictures");
              delay(100);
            }
            if (header.indexOf("GET /102g/on") >= 0) 
            {
              Serial.println("exit");
              delay(100);
            }
            if (header.indexOf("GET /102h/on") >= 0) 
            {
              Serial.println("minimize");
              delay(100);
            }
            if (header.indexOf("GET /102i/on") >= 0) 
            {
              Serial.println("zoom");
              delay(100);
            }
            if (header.indexOf("GET /102j/on") >= 0) 
            {
              Serial.println("chrome");
              delay(100);
            }
            if (header.indexOf("GET /102k/on") >= 0) 
            {
              Serial.println("firefox");
              delay(100);
            }
            if (header.indexOf("GET /102l/on") >= 0) 
            {
              Serial.println("windows");
              delay(100);
            }
            if (header.indexOf("GET /102p/on") >= 0) 
            {
              Serial.println("fileexplorer");
              delay(100);
            }
            if (header.indexOf("GET /102q/on") >= 0) 
            {
              Serial.println("local disk c");
              delay(100);
            }
            if (header.indexOf("GET /102r/on") >= 0) 
            {
              Serial.println("local disk d");
              delay(100);
            }
            if (header.indexOf("GET /102s/on") >= 0) 
            {
              Serial.println("local disk e");
              delay(100);
            }
            if (header.indexOf("GET /102t/on") >= 0) 
            {
              Serial.println("close window");
              delay(100);
            }
            if (header.indexOf("GET /102u/on") >= 0) 
            {
              Serial.println("refresh");
              delay(100);
            }
            if (header.indexOf("GET /102v/on") >= 0) 
            {
              Serial.println("music");
              delay(100);
            }
            if (header.indexOf("GET /102w/on") >= 0) 
            {
              Serial.println("newtab");
              delay(100);
            }
            if (header.indexOf("GET /102x/on") >= 0) 
            {
              Serial.println("settings");
              delay(100);
            }
            if (header.indexOf("GET /102b/on") >= 0) 
            {
              Serial.println("cortana");
              delay(100);
            }
            if (header.indexOf("GET /102a/on") >= 0) 
            {
              Serial.println("computer");
              delay(100);
            }
            if (header.indexOf("GET /102f/on") >= 0) 
            {
              Serial.println("videos");
              delay(100);
            }
            
            
             String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>\r\nGPIO is now ";
             s += "on";// creating response to client
             s += "</html>\n";
 
  // Send the response to the client
  client.print(s);
                  
    
}

