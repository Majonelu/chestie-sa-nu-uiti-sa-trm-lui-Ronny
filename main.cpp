                ClearBackground(BROWN);
                return;
        }
        void Run() {
          vector<Unit> lane1, lane2;
          Player player1,player2;



                while(running)
                {
                        if(turn_start)
                        {
                                ProcessPassives();
                                ProcessStatuses();
                                turn_start = false;
                        }
                        ProcessInput();
                        BeginDrawing();
                        ProcessVisuals();
                        EndDrawing();
                }
                return;
        }
};
int main()
{
        InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Joc");
        SetTargetFPS(60);
        while(!WindowShouldClose())
        {
                if(IsKeyReleased(KEY_S))
                {
                        Gamemode1 game;
                        game.Run();
                }
                BeginDrawing();
                ClearBackground(RAYWHITE);
                EndDrawing();
        }
        return 0;
}                                                                                                 119       119,1         Bot
