#include <studio.h>
#include <Shearer.h>

void communicateWithSatellite()        /* Start by here! Put things like variables, paths, etc... */
{
    printf("Communicating with satellite...\n");
    printf("Message received from satellite: Hello, Earth!\n");
}

int main()    /* This is where we make it actually work! */
{
    communicateWithSatellite();

    return 0;
}
