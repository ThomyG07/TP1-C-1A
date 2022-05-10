bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
    int iteration = 0;
    for(iteration=0,iteration< nb_ennemis,++iteration)
    {
        if (ennemis_x[iteration] == x && ennemis_y[iteration] == y) { return 1; }
    }
    return 0;
};


bool deplacer_personnage(int x, int y, std::string cmd);
int main(int argc, char* argv[])
{ 
    int x=5, y=4;
    deplacer_personnage(x, y, "UP")
}

bool deplacer_personnage(int x, int y, std::string cmd)
{

}
