# So_long
### The aim of the mandatory part:
To create a 2D game where any hero collects any valuables before leaving the place. It is built to make our work with textures, sprites and some gameplay elements.

### Example of a .ber map:
```
1111111111111111111111111
100000000000000010A100C01
1110000P00000C11100001111
1C0001100000000C0000C0111
111000000000000C111100111
110000010001101000C000011
1110000000000000000000111
111A000000C111100CA001E11
1111110000011110000001011
1C0000000000000C000000C11
1111111111111111111111111
```
>- **0** for an empty space,
>- **1** for a wall,
>- **C** for a collectible,
>- **E** for a map exit,
>- **P** for the player’s starting position,
 Run:
%> make
%> ./so_long maps/map4.ber
