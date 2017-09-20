#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Window.h"
#include "j1App.h" // ¿esta bn para el todo 4?


#include "SDL/include/SDL.h"


j1Window::j1Window() : j1Module()
{
	window = NULL;
	screen_surface = NULL;
	name.create("window");
}

// Destructor
j1Window::~j1Window()
{
}

// Called before render is available
bool j1Window::Awake()
{
	LOG("Init SDL window & surface");
	bool ret = true;

	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		LOG("SDL_VIDEO could not initialize! SDL_Error: %s\n", SDL_GetError());
		ret = false;
	}
	else
	{
		//Create window
		Uint32 flags = SDL_WINDOW_SHOWN;

		width = WIDTH;
		height = HEIGHT;
		scale = SCALE;

		if(FULLSCREEN)
		{
			flags |= SDL_WINDOW_FULLSCREEN;
		}

		if(BORDERLESS)
		{
			flags |= SDL_WINDOW_BORDERLESS;
		}

		if(RESIZABLE)
		{
			flags |= SDL_WINDOW_RESIZABLE;
		}

		if(FULLSCREEN_WINDOW)
		{
			flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
		}

		window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, flags);

		if(window == NULL)
		{
			LOG("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			ret = false;
		}
		else
		{
			//Get window surface
			screen_surface = SDL_GetWindowSurface(window);

			// TODO 4: Read the title of the app from the XML

			pugi::xml_document doc;
			// Load XML file into memory
			// Remark: to fully read declaration entries you have to specify
			// "pugi::parse_declaration"
			pugi::xml_parse_result result = doc.load_file("config.xml",
				pugi::parse_default | pugi::parse_declaration);
			if (!result)
			{
				LOG( "Parse error: " , result.description(), ", character pos= " , result.offset);
			}


			
			//pugi::xml_node root = doc.document_element();

			//// Read attribute value
			//pugi::xml_attribute attr;
			//if (attr = root.attribute("config")) // attribute really exists
			//{
			//	LOG("read as string: intVal=", attr.value(), "\n");
			//}
			//// and set directly the window title using SetTitle()
			// <name value="XML Game"></name>
			
			pugi::xml_node tools = doc.child("config");


			LOG("AAAAAAAAAAAAAAAA");
			//LOG(tools.attribute("name").as_string);
			//SetTitle(tools.attribute("name").value);
		}
	}

	return ret;
}

// Called before quitting
bool j1Window::CleanUp()
{
	LOG("Destroying SDL window and quitting all SDL systems");

	//Destroy window
	if(window != NULL)
	{
		SDL_DestroyWindow(window);
	}

	//Quit SDL subsystems
	SDL_Quit();
	return true;
}

// Set new window title
void j1Window::SetTitle(const char* new_title)
{
	//title.create(new_title);
	SDL_SetWindowTitle(window, new_title);
}

void j1Window::GetWindowSize(uint& width, uint& height) const
{
	width = this->width;
	height = this->height;
}

uint j1Window::GetScale() const
{
	return scale;
}