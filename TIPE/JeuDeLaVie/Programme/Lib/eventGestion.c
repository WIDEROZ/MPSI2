#include "eventGestion.h"

SDL_bool GESTION(Var *var, SDL_Event event, bool* isMouseButtonPressed, bool* MOUSE_MOVING){
    while (SDL_PollEvent(&event)){ // Elle va lire tout les évènements
        /*on a aussi : SDL_WaitEvent(&event) mais ca bloque la fenêtre*/
    switch (event.type) // Le switch c'est comme un match en ocaml mais que pour les int
            {
                case SDL_KEYDOWN :
                    
                    switch (event.key.keysym.sym)
                    {
                    
                    case SDLK_b:
                        var->KEY_DOWN_STATUS[SDLK_b] = 1;

                        continue;



                    case SDLK_c:
                        var->KEY_DOWN_STATUS[SDLK_c] = 1;
                        GRID_DISPLAY_CREATION(var->renderer, var->texture, *var->camera);
                        continue;

                    // ---------- Déplacement de la caméra ----------- //
                    case SDLK_q:
                        var->KEY_DOWN_STATUS[SDLK_q] = 1;
                        
                        if(var->camera->x - 10 >= 0){
                            var->camera->x -= 10;
                        }
                        else
                        {
                            var->camera->x = 0;
                        }
                        
                        continue;

                    case SDLK_d:
                        var->KEY_DOWN_STATUS[SDLK_d] = 1;
                        if(var->camera->x + 10 <= TEXTURE_WIDTH - RENDER_WIDTH){
                            var->camera->x += 10;
                        }
                        else
                        {
                            var->camera->x = TEXTURE_WIDTH - RENDER_WIDTH;
                        }
                        
                        continue;

                    case SDLK_z:
                        var->KEY_DOWN_STATUS[SDLK_z] = 1; 
                        if(var->camera->y - 10 >= 0){
                            var->camera->y -= 10;
                        }
                        else{
                            var->camera->y = 0;
                        }
                        continue;

                    case SDLK_s:
                        
                        var->KEY_DOWN_STATUS[SDLK_s] = 1;
                        
                        if(var->camera->y + 10 <= TEXTURE_HEIGHT - RENDER_HEIGHT){
                            var->camera->y += 10;
                        }
                        else{
                            var->camera->y = TEXTURE_HEIGHT - RENDER_HEIGHT;
                        }
                        
                        continue;

                    // ------ Fin du déplacement de la caméra ----- //

                
                    default:
                        
                        continue;
                    }
                
                case SDL_KEYUP : 
                    switch (event.key.keysym.sym)
                    {

                    case SDLK_b:
                        var->KEY_DOWN_STATUS[SDLK_b] = 0;
                        continue;

                    case SDLK_c:
                        var->KEY_DOWN_STATUS[SDLK_c] = 0;
                        continue;

                    
                    case SDLK_q:
                        var->KEY_DOWN_STATUS[SDLK_q] = 0;
                        continue;

                    case SDLK_d:
                        var->KEY_DOWN_STATUS[SDLK_d] = 0;
                        continue;
                    
                    case SDLK_z:
                        var->KEY_DOWN_STATUS[SDLK_z] = 0;
                        continue;

                    case SDLK_s:
                        var->KEY_DOWN_STATUS[SDLK_s] = 0;
                        continue;

                    
                    default:
                        continue;
                    }

                case SDL_MOUSEMOTION :
                    //printf("Coordonée : (%d, %d) \n", event.motion.x, event.motion.y);
                    //printf("Vitesse : (%d, %d) \n", event.motion.xrel, event.motion.yrel);
                    
                    // ----- Actualisation du déplacement de la caméra avec la souris ----- //
                    if(*isMouseButtonPressed && event.motion.x <= GRID_DISP_WIDTH && event.motion.y <= GRID_DISP_HEIGHT){
                        MOVE_CAMERA_MOUSE(var->renderer, var->texture, var->camera, event.motion.xrel, event.motion.yrel);
                        *MOUSE_MOVING = true;
                    }
                    
                    
                    
                    
                    
                    continue;

                case SDL_MOUSEBUTTONDOWN :
                    *isMouseButtonPressed = true;
                    printf("x : %d, y : %d \n", event.motion.x, event.motion.y);
                    printf("Case x : %d, Case y : %d \n", GET_CASE_FROM_COORD_X(event.motion.x), GET_CASE_FROM_COORD_Y(event.motion.y));




                    continue;

                case SDL_MOUSEBUTTONUP :
                    *isMouseButtonPressed = false;
                    if (!(*MOUSE_MOVING))
                    {
                        CASE_CLICK_DISPLAY(var->window, var->renderer, var->texture, *var->camera, var->XY_CASE_MAT, event.motion.x, event.motion.y);
                    }
                    *MOUSE_MOVING = false;
                    
                    continue;



                case SDL_QUIT :
                    return SDL_FALSE;
                    break;


                default:
                    break;
            }
    }
    
    return SDL_TRUE;
}
    