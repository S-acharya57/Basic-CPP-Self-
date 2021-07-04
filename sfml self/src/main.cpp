#include<SFML/Graphics.hpp>
#include<iostream>

//#include "AssetManager.h"
//#include <assert.h>


using namespace sf;

void initShape(RectangleShape& shape, Vector2f const& pos, Color const& color)
    {
        shape.setFillColor(color);
        shape.setPosition(pos);
        shape.setOrigin(shape.getSize() * 0.5f);
    }
/* 
AssetManager * AssetManager::sInstance = nullptr;

AssetManager::AssetManager()
{
   //only allow one assetmanager to exist
   //otherwise, throw an exception

   assert(sInstance ==nullptr);
   sInstance = this;
} */

int main()
{
    RenderWindow window(VideoMode(800, 640),  "This is the title");
    window.setFramerateLimit(60);
    String buffer;

    auto wSize = window.getSize();
   /* View view(FloatRect(0, 0, wSize.x, wSize.y));

   //View is centered around the point (0, 0)
   view.setCenter(Vector2f(0, 0));

   window.setView(view);

 */




    Texture texture;
    Sprite sprite;

    if(!texture.loadFromFile("meee.jpg"))
    {
        std::cout<<"Could not load background image"<<std::endl;
    }

    sprite.setTexture(texture);
    sprite.setScale(1.0f, (float)wSize.y/texture.getSize().y);


    View view;
    view.reset(FloatRect(0, 0, wSize.x, wSize.y));
    view.setViewport(FloatRect(0, 0, 1.0f, 1.0f));

    Vector2f position(0, 0);








/* 

   Vector2u textureSize = texture.getSize();
   float rectWidth = static_cast<float>(textureSize.x);
   float rectHeight = static_cast<float>(textureSize.y);
   texture.setSmooth(true);
    setting the texture in repeat mode

   texture.setRepeated(true);


   Sprite sprite(texture);


   rectangle.setTextureRect(IntRect(0, 0, 128*3, 221*3));




   CircleShape circleshape(50);
   circleshape.setFillColor(Color::Magenta);
   circleshape.setOutlineColor(Color::White);
   circleshape.setOutlineThickness(3);




   ConvexShape triangle;
   triangle.setPointCount(3);
   triangle.setPoint(0, Vector2f(100, 0));
   triangle.setPoint(1, Vector2f(100, 100));
   triangle.setPoint(3, Vector2f(0, 100));
   triangle.setFillColor(Color::Cyan);



   Vector2f startPos = Vector2f(50, 50);
   RectangleShape playerRect(Vector2f(50, 50));
   initShape(playerRect, startPos, Color::Green);

   RectangleShape userRect(Vector2f(50, 50));
   initShape(userRect, Vector2f(400, 50), Color::Blue);

   RectangleShape villainRect(Vector2f(200, 80));
   initShape(villainRect, Vector2f(300, 60), Color::Cyan);
   //Game loop

   bool moving= false;
 */


    RectangleShape rect(Vector2f(20, 20));
    rect.setFillColor(Color::Red);


    Clock clock;
    float moveSpeed = 10000.0f;
    while(window.isOpen())
    {

        clock.restart();

        // Update the delta time to measure movement accurately
//        sf::Time dt = clock.restart();
//
//        // Convert to seconds to do the maths
//        float dtAsSeconds = dt.asSeconds();
//
//        // For debuging, print the time to the terminal
//        // It illustrates the differences
//        std::cout << "Time step: " << dtAsSeconds << '\n';
//


        //handle events
        Event event;
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
                case (Event::EventType::Closed):
                    window.close();
                    break;

                case (Event::EventType::TextEntered):
                    buffer+= event.text.unicode;
                    break;
//
                case (Event::EventType::KeyReleased):
                    if(event.key.code == Keyboard::Key::Return)
                    {
                        window.setTitle(buffer);
                        buffer.clear();
                    }
//                    if(event.key.code == Keyboard::Key::Right)
//                    {
//                        moving = false;
//                    }

                case (Event::EventType::KeyPressed):
                    if(event.key.code == Keyboard::Key::Escape)
                    {
                        window.close();
                    }

//                    if(event.key.code == Keyboard::Key::Right)
//                    {
//                        moving = true;
//                    }

                default:
                    break;

            }

        }

        if(Keyboard::isKeyPressed(Keyboard::Right))
        {
            rect.move(moveSpeed * clock.getElapsedTime().asSeconds(), 0);
        }
        else if(Keyboard::isKeyPressed(Keyboard::Left))
        {
            rect.move(- moveSpeed*clock.getElapsedTime().asSeconds(),0);
        }
        if(Keyboard::isKeyPressed(Keyboard::Up))
        {
            rect.move(0, -moveSpeed * clock.getElapsedTime().asSeconds());
        }
        else if(Keyboard::isKeyPressed(Keyboard::Down))
        {
            rect.move(0, moveSpeed * clock.getElapsedTime().asSeconds());
        }



        position.x = rect.getPosition().x + 10 - (wSize.x/2);
        position.y = rect.getPosition().y + 10 - (wSize.y/2);

        if(position.x<0)
        {
            position.x = 0;
        }
        if(position.y<0)
        {
            position.y =0;
        }

        view.reset(FloatRect(position.x, position.y, wSize.x, wSize.y));
/* 
       if(moving)
       {
           playerRect.move(2, 0);

           if(Keyboard::isKeyPressed(Keyboard::Key::Down))
           {
               playerRect.move(0,5);

           }
           if(Keyboard::isKeyPressed(Keyboard::Key::Up))
           {
               playerRect.move(0, -5);
           }

            if(Keyboard::isKeyPressed(Keyboard::Key::Left))
           {
               playerRect.move(-2,0);

           }


           if(playerRect.getGlobalBounds().intersects(userRect.getGlobalBounds()))
           {
               window.close();
           }
           if(playerRect.getGlobalBounds().intersects(villainRect.getGlobalBounds()))
           {
               playerRect.setPosition(startPos);
           }
 */
        //Update scene


        window.setView(view);


        //Render cycle
        window.draw(sprite);
        window.draw(rect);


        //Render objects
        window.display();
        window.clear();
    }

    return 0;
}



































