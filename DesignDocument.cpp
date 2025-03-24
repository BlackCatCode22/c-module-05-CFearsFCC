/*
I plan on using a class structure as follow:

class Animal 
{
public:
    string name;
    string species;
    int age;
    string birthSeason;
    string color;
    int weight;
    string origin;
    Animal* next;

    // Constructor
    Animal(string n, string s, int a, string b, string c, int w, string o)
        : name(n), species(s), age(a), birthSeason(b), color(c), weight(w), origin(o), next(nullptr) {}
};



//To open and parse the .txt and organize them by species:


void readAnimalsFromFile(const string& filename, unordered_map<string, SpeciesList>& speciesDict) {
    ifstream file(filename);
    if (!file.is_open()) 
    {
        cerr << "Error: Failed to open the file '" << filename << "'." << endl;
        return;
    }

    string name, species, birthSeason, color, origin;
    int age, weight;

    // Read the file line by line
    while (file >> age >> birthSeason >> species >> name >> color >> weight >> origin) 
    {
        speciesDict[species].addAnimal(name, species, age, birthSeason, color, weight, origin);
    }
