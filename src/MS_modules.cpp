#include "MS_modules.hpp"

Plugin *plugin;

void init(rack::Plugin *p)
{
    plugin = p;
    plugin->slug = "MS-Modules";
    plugin->website = "https://github.com/Phal-anx/MS-Modules";
    p->addModel(createModel<RandomSourceWidget>("MS-Modules", "Random Source", "Random Source"));
    p->addModel(createModel<MultWidget>("MS-Modules", "Mult", "Mult"));
}
