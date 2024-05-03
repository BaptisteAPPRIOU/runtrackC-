class Joueur {
    public:
        Joueur(int x, int y);
        void afficher();
        void deplacer(int x, int y);
        ~Joueur();
    private:
        int x;
        int y;
};