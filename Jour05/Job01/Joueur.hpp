class Joueur {
    public:
        Joueur();
        void init(int x, int y);
        void afficher();
        void deplacer(int x, int y);
        ~Joueur();
    private:
        int x;
        int y;
};