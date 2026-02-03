namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
  public:
    int x_coordinate{};
    int y_coordinate{};
    Alien(int x, int y) {
      x_coordinate = x;
      y_coordinate = y;
    }

    int get_health()
    {
      return health;
    }

    bool is_alive() {
      if (health > 0) {
        return true;
      }
      if (health <= 0) {
        return false;
      }
    }

    bool hit()
    {
      health -= 1;
      if (health < 0)
      {
        health = 0;
      }
      return true;
    }
  bool teleport(int x_new, int y_new)
    {
      x_coordinate = x_new;
      y_coordinate = y_new;
      return true;
    }
  bool collision_detection(Alien alien)
    {
      return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
    }
  private:
    int health = 3;
};

}