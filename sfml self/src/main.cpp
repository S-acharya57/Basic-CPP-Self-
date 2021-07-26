// #include<SFML/Graphics.hpp>
// #include<iostream>
// #include<string>

// //#include "AssetManager.h"
// //#include <assert.h>


// using namespace sf;
// using namespace std;


// void initShape(RectangleShape& shape, Vector2f const& pos, Color const& color)
//     {
//         shape.setFillColor(color);
//         shape.setPosition(pos);
//         shape.setOrigin(shape.getSize() * 0.5f);
//     }
// /* 
// AssetManager * AssetManager::sInstance = nullptr;

// AssetManager::AssetManager()
// {
//    //only allow one assetmanager to exist
//    //otherwise, throw an exception

//    assert(sInstance ==nullptr);
//    sInstance = this;
// } */

// int main()
// {
//     RenderWindow window(VideoMode(800, 640),  "This is the title");
//     window.setFramerateLimit(60);
//     string name, name2;

//     auto wSize = window.getSize();
//    /* View view(FloatRect(0, 0, wSize.x, wSize.y));

//    //View is centered around the point (0, 0)
//    view.setCenter(Vector2f(0, 0));

//    window.setView(view);

//  */




//     Texture texture;
//     Sprite sprite;

//     if(!texture.loadFromFile("meee.jpg"))
//     {
//         std::cout<<"Could not load background image"<<std::endl;
//     }

//     sprite.setTexture(texture);
//     sprite.setScale(1.0f, (float)wSize.y/texture.getSize().y);


//     View view;
//     view.reset(FloatRect(0, 0, wSize.x, wSize.y));
//     view.setViewport(FloatRect(0, 0, 1.0f, 1.0f));

//     Vector2f position(0, 0);


//     Text text;
//     text.setString("Hey there buddies!");
//     text.setFillColor(Color::Red);
//     text.setPosition(300, 300);
//     text.setCharacterSize(24);





// /* 

//    Vector2u textureSize = texture.getSize();
//    float rectWidth = static_cast<float>(textureSize.x);
//    float rectHeight = static_cast<float>(textureSize.y);
//    texture.setSmooth(true);
//     setting the texture in repeat mode

//    texture.setRepeated(true);


//    Sprite sprite(texture);


//    rectangle.setTextureRect(IntRect(0, 0, 128*3, 221*3));




//    CircleShape circleshape(50);
//    circleshape.setFillColor(Color::Magenta);
//    circleshape.setOutlineColor(Color::White);
//    circleshape.setOutlineThickness(3);




//    ConvexShape triangle;
//    triangle.setPointCount(3);
//    triangle.setPoint(0, Vector2f(100, 0));
//    triangle.setPoint(1, Vector2f(100, 100));
//    triangle.setPoint(3, Vector2f(0, 100));
//    triangle.setFillColor(Color::Cyan);



//    Vector2f startPos = Vector2f(50, 50);
//    RectangleShape playerRect(Vector2f(50, 50));
//    initShape(playerRect, startPos, Color::Green);

//    RectangleShape userRect(Vector2f(50, 50));
//    initShape(userRect, Vector2f(400, 50), Color::Blue);

//    RectangleShape villainRect(Vector2f(200, 80));
//    initShape(villainRect, Vector2f(300, 60), Color::Cyan);
//    //Game loop

//    bool moving= false;
//  */


//     RectangleShape rect(Vector2f(20, 20));
//     rect.setFillColor(Color::Red);


//     Clock clock;
//     float moveSpeed = 10000.0f;
//     while(window.isOpen())
//     {

//         clock.restart();

//         // Update the delta time to measure movement accurately
// //        sf::Time dt = clock.restart();
// //
// //        // Convert to seconds to do the maths
// //        float dtAsSeconds = dt.asSeconds();
// //
// //        // For debuging, print the time to the terminal
// //        // It illustrates the differences
// //        std::cout << "Time step: " << dtAsSeconds << '\n';
// //


//         //handle events
//         Event event;
//         while (window.pollEvent(event))
//         {
//             switch(event.type)
//             {
//                 case (Event::EventType::Closed):
//                     window.close();
//                     break;

//                 case (Event::EventType::TextEntered):
//                     name+= event.text.unicode;
//                     // cout<<name<<endl;
//                     break;

// //
//                 case (Event::EventType::KeyReleased):
//                     if(event.key.code == Keyboard::Key::Return)
//                     {
//                         window.setTitle(name);
//                         name.clear();
//                     }
// //                    if(event.key.code == Keyboard::Key::Right)
// //                    {
// //                        moving = false;
// //                    }

//                 case (Event::EventType::KeyPressed):
//                     if(event.key.code == Keyboard::Key::Escape)
//                     {
//                         window.close();
//                     }

// //                    if(event.key.code == Keyboard::Key::Right)
// //                    {
// //                        moving = true;
// //                    }

//                 default:
//                     break;

//             }

//         }

//         if(Keyboard::isKeyPressed(Keyboard::Right))
//         {
//             rect.move(moveSpeed * clock.getElapsedTime().asSeconds(), 0);
//         }
//         else if(Keyboard::isKeyPressed(Keyboard::Left))
//         {
//             rect.move(- moveSpeed*clock.getElapsedTime().asSeconds(),0);
//         }
//         if(Keyboard::isKeyPressed(Keyboard::Up))
//         {
//             rect.move(0, -moveSpeed * clock.getElapsedTime().asSeconds());
//         }
//         else if(Keyboard::isKeyPressed(Keyboard::Down))
//         {
//             rect.move(0, moveSpeed * clock.getElapsedTime().asSeconds());
//         }



//         position.x = rect.getPosition().x + 10 - (wSize.x/2);
//         position.y = rect.getPosition().y + 10 - (wSize.y/2);

//         if(position.x<0)
//         {
//             position.x = 0;
//         }
//         if(position.y<0)
//         {
//             position.y =0;
//         }

//         view.reset(FloatRect(position.x, position.y, wSize.x, wSize.y));
// /* 
//        if(moving)
//        {
//            playerRect.move(2, 0);

//            if(Keyboard::isKeyPressed(Keyboard::Key::Down))
//            {
//                playerRect.move(0,5);

//            }
//            if(Keyboard::isKeyPressed(Keyboard::Key::Up))
//            {
//                playerRect.move(0, -5);
//            }

//             if(Keyboard::isKeyPressed(Keyboard::Key::Left))
//            {
//                playerRect.move(-2,0);

//            }


//            if(playerRect.getGlobalBounds().intersects(userRect.getGlobalBounds()))
//            {
//                window.close();
//            }
//            if(playerRect.getGlobalBounds().intersects(villainRect.getGlobalBounds()))
//            {
//                playerRect.setPosition(startPos);
//            }
//  */
//         //Update scene


//         window.setView(view);


//         //Render cycle
//         // window.draw(sprite);
//         window.draw(rect);
//         // window.clear();
//         window.draw(text);
//         // std::cout<<name<<std::endl;


//         //Render objects
//         window.display();
//         name2 = name;
//         cout<<name2<<endl;

//     }

//     return 0;
// }





// // #include <SFML/Graphics.hpp>
// // #include<iostream>

// // using namespace sf;
// // using namespace std;



// // int main(){
// // 	sf::Vector2i screenDimensions(800,600);
// // 	sf::RenderWindow Window;
// // 	Window.create(sf::VideoMode(screenDimensions.x,screenDimensions.y),"MY WINDOW",sf::Style::Close);
	 
// // 	 // making stars
// // 	sf::ConvexShape star[5]; 
	
// // 	for(int i=0;i<5;i++){
// // 		star[i].setPointCount(10);
// // 			star[i].setPoint(0,Vector2f(100,0));
// // 			star[i].setPoint(1,Vector2f(72,68));
// // 			star[i].setPoint(2,Vector2f(5,68));
// // 			star[i].setPoint(3,Vector2f(63,105));
// // 			star[i].setPoint(4,Vector2f(22,160));
// // 			star[i].setPoint(5,Vector2f(100,125));
// // 			star[i].setPoint(6,Vector2f(178,160));
// // 			star[i].setPoint(7,Vector2f(137,105));
// // 			star[i].setPoint(8,Vector2f(194,65));
// // 			star[i].setPoint(9,Vector2f(123,65));
			
// // 			star[i].setScale(Vector2f(0.3f,0.3f));
// // 			star[i].setPosition(Vector2f(100+(100*i),750));
// // 			Window.draw(star[i]);	
// // 	}
	
// // 	sf::Texture bTexture, Texture1;
// // 	sf::Sprite bImage,Image1;
// // 	sf::Text text1;
// // 	sf::Font font;
// // 			if (!font.loadFromFile("arial.ttf"))
// // 			{
// // 			    throw ("COULD NOT LOAD FONT");
// // 			}
// // 			text1.setString("The Shawshank Redemption \n 1994 \n Summary : \n Cast: \nTim Robbins\nAndy Dufresne");
// // 			text1.setCharacterSize(20); // in pixels, not points!
// // 			text1.setFillColor(sf::Color::Red);
// // 			text1.setPosition(Window.getPosition().x+200,Window.getPosition().y);
// // 			text1.setFont(font);
	
// // 	sf::RectangleShape recta(sf::Vector2f(300,400));
// // 	recta.setFillColor(Color::White);
// // 	recta.setPosition(Window.getPosition().x+200,Window.getPosition().y);
	
// // 	//Image 1
// // 	if (!bTexture.loadFromFile("movie1.jpg"))
// // 		cout<<"Could not load image"<<endl;
// // 	bImage.setTexture(bTexture);
// // 	bImage.setOrigin(sf::Vector2f(0.f, 0.f));
// // 	bImage.setScale(sf::Vector2f(1.5f,1.5f));
	
// // 	//Image2
// // 	if (!Texture1.loadFromFile("movie2.jpg"))
// // 		cout<<"Could not load image"<<endl;
// // 	Image1.setTexture(Texture1);
// // 	Image1.setPosition(Window.getPosition().x-300,Window.getPosition().y+800);
// // 	Image1.setOrigin(sf::Vector2f(0.f, 0.f));
// // 	Image1.setScale(sf::Vector2f(0.4f,0.4f));
// // 	//bImage.setScale(1.0f,(float)screenDimensions.y / bTexture.getSize().y);
	
// // 	//Controller
// // 	sf::RectangleShape rect(sf::Vector2f(20,20));
// // 	rect.setFillColor(sf::Color::Red);
// // 	sf::Clock clock;
// // 	float moveSpeed = 10000.0f;
// // 	sf::View view;																	//creating a view
// // 	view.reset(sf::FloatRect(0,0, screenDimensions.x,screenDimensions.y));			//divides screen(split screen)
// // 	view.setViewport(sf::FloatRect(0,0,1.f,1.0f));
// // 	sf::Vector2f position(0,0);
// // 	while(Window.isOpen())
// // 	{
// // 		clock.restart();
// // 		sf::Event Event;
// // 		while(Window.pollEvent(Event))
// // 		{
// // 			switch(Event.type)
// // 			{
// // 				case sf::Event::Closed:
// // 					Window.close();
// // 					break;
// // 				case sf:: Event::KeyPressed:
// // 					if(Event.key.code ==  sf::Keyboard::Escape)
// // 						Window.close();
// // 						break;
						
// // 				}

// // 					//To change the color of star on clicking
// // 					if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
// // 					{
// // 			case (Event::EventType::TextEntered):
//                     name+= event.text.unicode;
//                     // cout<<name<<endl;
//                     break;		    // transform the mouse position from window coordinates to world coordinates
// // 					    sf::Vector2f mouse = Window.mapPixelToCoords(sf::Mouse::getPosition(Window));
					    
// // 					    for (int k=0;k<5;k++)
// // 					    {
// // 							 sf::FloatRect bounds = star[k].getGlobalBounds();
// // 					  		 // sf::FloatRect bound = star2.getGlobalBounds();
					
// // 					   		 // hit test
// // 						    if (bounds.contains(mouse))
// // 						    {
// // 						        star[k].setFillColor(Color::Yellow);
						        
// // 						    }	
					    	
// // 						}
					
// // 					    // retrieve the bounding box of the rect
// // 					    sf::FloatRect bounds = star[0].getGlobalBounds();
// // 					   // sf::FloatRect bound = star2.getGlobalBounds();
					
// // 					    // hit test
// // 					    if (bounds.contains(mouse))
// // 					    {
// // 					        star[0].setFillColor(Color::Yellow);
					        
// // 					    }
// // 					}
			
// // 		}
// // 		if(sf::Keyboard::isKeyPressed(sf:: Keyboard::Right))
// // 			rect.move(moveSpeed*clock.getElapsedTime().asSeconds(),0);
// // 			//rect.move(0.4f,0.f);
// // 		else if(sf::Keyboard::isKeyPressed(sf:: Keyboard::Left))
// // 			rect.move(-moveSpeed*clock.getElapsedTime().asSeconds(),0);
// // 			//rect.move(-0.4f,0.f);
// // 		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
// //         //	rect.move(0, -moveSpeed * clock.getElapsedTime().asSeconds());
// //         	rect.move(0.f,-0.4f);
// //         else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
// //         //	rect.move(0, moveSpeed * clock.getElapsedTime().asSeconds());
// //         	rect.move(0.f,0.4f);
// //         position.x=rect.getPosition().x+10 - (screenDimensions.x/2);
// // 		position.y=rect.getPosition().y+10 - (screenDimensions.y/2);
// // 		if (position.x<0)
// // 			position.x=0;
// // 		if (position.y<0)
// // 			position.y=0;
// // 		view.reset(sf::FloatRect(position.x,position.y, screenDimensions.x,screenDimensions.y));
// // 		//activating the view
// // 		Window.setView(view);
// // 		Window.draw(bImage);
// // 		Window.draw(Image1);
// // 		Window.draw(rect);
// // 		Window.draw(recta);
// // 		Window.draw(text1);
// // 		for (int j=0;j<5;j++)
// // 		{
// // 			Window.draw(star[j]);
			
// // 		}		

// // 		Window.display();
// // 		Window.clear();	
// // 	}
// // } 


		





// // #include <SFML/Graphics.hpp>
// // #include<iostream>
// // #include <string>
// // //#include"star.h"

// // using namespace sf;
// // using namespace std;



// // int main(){

// //     string a = "sajjan";
// // 	sf::Vector2i screenDimensions(800,600);
// // 	sf::RenderWindow Window;
// // 	Window.create(sf::VideoMode(screenDimensions.x,screenDimensions.y),"MY WINDOW",sf::Style::Close);
	
// // 	sf::ConvexShape star(10);  
// // 	star.setPoint(0,Vector2f(100,0));
// // 	star.setPoint(1,Vector2f(72,68));
// // 	star.setPoint(2,Vector2f(5,68));
// // 	star.setPoint(3,Vector2f(63,105));
// // 	star.setPoint(4,Vector2f(22,160));
// // 	star.setPoint(5,Vector2f(100,125));
// // 	star.setPoint(6,Vector2f(178,160));
// // 	star.setPoint(7,Vector2f(137,105));
// // 	star.setPoint(8,Vector2f(194,65));
// // 	star.setPoint(9,Vector2f(123,65));
	 
// // 	sf::Texture bTexture, Texture1;
// // 	sf::Sprite bImage,Image1;
// // 	sf::Text text1,mytext;
// // 	sf::Font font;
// // 			if (!font.loadFromFile("arial.ttf"))
// // 			{
// // 			    throw ("COULD NOT LOAD FONT");
// // 			}
// // 			text1.setString(a);
// // 			text1.setCharacterSize(20); // in pixels, not points!
// // 			text1.setFillColor(sf::Color::Red);
// // 			text1.setPosition(Window.getPosition().x+200,Window.getPosition().y);
// // 			text1.setFont(font);
// // 			mytext.setString("Ratings");
// // 			mytext.setCharacterSize(28);
// // 			mytext.setFillColor(Color::Green);
// // 			mytext.setFont(font);
	
// // 	sf::RectangleShape recta(sf::Vector2f(300,400));//
// // 	sf::RectangleShape title(sf::Vector2f(300,30));//
// // 	recta.setFillColor(Color::White);
// // 	recta.setPosition(Window.getPosition().x+200,Window.getPosition().y);
// // 	title.setFillColor(Color::Yellow);
// // 	title.setPosition(Window.getPosition().x+200,Window.getPosition().y);
	
// // 	//Image 1
// // 	if (!bTexture.loadFromFile("movie1.jpg"))
// // 		cout<<"Could not load image"<<endl;
// // 	bImage.setTexture(bTexture);
// // 	bImage.setOrigin(sf::Vector2f(0.f, 0.f));
// // 	bImage.setScale(sf::Vector2f(1.5f,1.5f));
	
// // 	//Image2
// // 	if (!Texture1.loadFromFile("movie2.jpg"))
// // 		cout<<"Could not load image"<<endl;
// // 	Image1.setTexture(Texture1);
// // 	Image1.setPosition(Window.getPosition().x-300,Window.getPosition().y+800);
// // 	Image1.setOrigin(sf::Vector2f(0.f, 0.f));
// // 	Image1.setScale(sf::Vector2f(0.4f,0.4f));
// // 	//bImage.setScale(1.0f,(float)screenDimensions.y / bTexture.getSize().y);
	
// // 	//Controller
// // 	sf::RectangleShape rect(sf::Vector2f(20,20));
// // 	rect.setFillColor(sf::Color::Red);
// // 	sf::Clock clock;
// // 	float moveSpeed = 10000.0f;
// // 	sf::View view;																	//creating a view
// // 	view.reset(sf::FloatRect(0,0, screenDimensions.x,screenDimensions.y));			//divides screen(split screen)
// // 	view.setViewport(sf::FloatRect(0,0,1.f,1.0f));
// // 	sf::Vector2f position(0,0);
// // 	while(Window.isOpen())
// // 	{
// // 		clock.restart();
// // 		sf::Event Event;
// // 		while(Window.pollEvent(Event))
// // 		{
// // 			switch(Event.type)
// // 			{
// // 				case sf::Event::Closed:
// // 					Window.close();
// // 					break;
// // 				case sf:: Event::KeyPressed:
// // 					if(Event.key.code ==  sf::Keyboard::Escape)
// // 						Window.close();
// // 						break;
						
// // 			}
// // 				if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
// // 					{
// // 					    // transform the mouse position from window coordinates to world coordinates
// // 					    sf::Vector2f mouse = Window.mapPixelToCoords(sf::Mouse::getPosition(Window));						
// // 							 sf::FloatRect bounds = title.getGlobalBounds();
// // 							 if (bounds.contains(mouse))
// // 					    {
// // 					        title.setFillColor(Color::Blue);
// // 					        Window.close();
// // 					        sf::RenderWindow win2 (sf::VideoMode(700,700),"TheShawshank Redemption",sf::Style::Close);
// // 					        while(win2.isOpen())
// // 						{
// // 							sf::Event event;
// // 							while(win2.pollEvent(event))
// //     					{						
// // 							if (event.type==sf::Event::Closed)
// // 								win2.close();
// // 		    				win2.clear();
// // 		    				win2.draw(mytext);
// // 		    				win2.draw(text1);
// // 		    				win2.draw(star);
// // 		    				text1.setFillColor(sf::Color::White);
// // 		    				bImage.setScale(Vector2f(0.8f,0.8f));
// // 		    				bImage.setPosition(200,0);
// // 		    				text1.setPosition(0,400);
// // 		    				mytext.setPosition(0,600);
// // 		    				star.setPosition(200,500);
// // 		    				win2.draw(bImage);
// // 		    				win2.display();					 	
// // 						}
// // 						}
					        
// // 					    }
							
						

// // 					}		
			
// // 		}
// // 		if(sf::Keyboard::isKeyPressed(sf:: Keyboard::Right))
// // 			rect.move(moveSpeed*clock.getElapsedTime().asSeconds(),0);
// // 			//rect.move(0.4f,0.f);
// // 		else if(sf::Keyboard::isKeyPressed(sf:: Keyboard::Left))
// // 			rect.move(-moveSpeed*clock.getElapsedTime().asSeconds(),0);
// // 			//rect.move(-0.4f,0.f);
// // 		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
// //         //	rect.move(0, -moveSpeed * clock.getElapsedTime().asSeconds());
// //         	rect.move(0.f,-0.4f);
// //         else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
// //         //	rect.move(0, moveSpeed * clock.getElapsedTime().asSeconds());
// //         	rect.move(0.f,0.4f);
// //         position.x=rect.getPosition().x+10 - (screenDimensions.x/2);
// // 		position.y=rect.getPosition().y+10 - (screenDimensions.y/2);
// // 		if (position.x<0)
// // 			position.x=0;
// // 		if (position.y<0)
// // 			position.y=0;
// // 		view.reset(sf::FloatRect(position.x,position.y, screenDimensions.x,screenDimensions.y));
// // 		//activating the view
// // 		Window.setView(view);
// // 		Window.draw(bImage);
// // 		Window.draw(Image1);
// // 		Window.draw(rect);
// // 		Window.draw(recta);
// // 		Window.draw(title);
// // 		Window.draw(text1);
// // 		Window.display();
// // 		Window.clear();	
// // 	}
// // } 

#include<SFML/Graphics.hpp>
#include<iostream>
#include<string>

using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(800, 640),  "This is the title");
    window.setFramerateLimit(10);

    string name, name2;
    Font font;
	if (!font.loadFromFile("arial.ttf"))
	{
	    throw ("COULD NOT LOAD FONT");
	}

    Text text;
    text.setString("Hey there buddies!");
    text.setFillColor(Color::Red);
    text.setPosition(window.getPosition().x+200,window.getPosition().y);
    text.setCharacterSize(24);
    text.setFont(font);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
                case (Event::EventType::Closed):
                    window.close();
                    break;

                case (Event::EventType::KeyPressed):
                    if(event.key.code == Keyboard::Key::Escape)
                    {
                        window.close();
                    }

                case (Event::EventType::TextEntered):
                    name+= event.text.unicode;
                    cout<<name<<endl;
                    
                    break;
            }
        }

        window.clear(Color::Magenta);
        window.draw(text);
        window.display();

    }
    
    return 0;
}

