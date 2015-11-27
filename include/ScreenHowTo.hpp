#ifndef SCREENHOWTO_H
#define SCREENHOWTO_H

#include <fstream>
#include <ostream>

#include "Screen.hpp"
#include "../constants.hpp"
#include "../libs/ResourcesManagerSFML2_1.hpp"

#include <SFGUI/Box.hpp>
#include <SFGUI/Image.hpp>
#include <SFGUI/Label.hpp>
#include <SFGUI/Window.hpp>
#include <SFGUI/SFGUI.hpp>

class ScreenHowTo : public Screen
{
    public:
        ScreenHowTo();
        virtual int Run ( sf::RenderWindow &App);
        virtual ~ScreenHowTo();

        void loadInstruction();
        void previousClick();
        void nextClick();

        void loadFileInstruction();
        sf::Image Resize( sf::Image CurrentImage, bool keep, const sf::Vector2u& customSize);

    private:
        bool m_quit;
        sf::Sprite m_background;
        sfg::Box::Ptr m_box;
        sfg::Box::Ptr m_boxImages;
        sfg::Box::Ptr m_boxLabel;
        sfg::SFGUI m_sfgui;
        sfg::Window::Ptr m_window;
        sfg::Button::Ptr m_next;
        sfg::Button::Ptr m_previous;
        sfg::Image::Ptr m_image;
        sfg::Label::Ptr m_label;
        std::vector<std::string> m_filenameImages;
        std::vector<std::string> m_instructions;
        int m_nbInstruction;
        int m_currentInstruction;
};

#endif // SCREENHOWTO_H
