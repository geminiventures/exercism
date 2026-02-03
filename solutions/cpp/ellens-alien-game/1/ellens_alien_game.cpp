namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
  public:
  int x;
  int y;

    Alien(int x_coordinate, int y_coordinate) {
      x = x_coordinate;
      y = y_coordinate;
    }
    int get_health() const
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
      x = x_new;
      y = y_new;
      return true;
    }
  bool collision_detection(Alien other)
    {
      if (other.x == x && other.y == y)
      {
        return true;
      } else return false;
    }
  private:
    int health = 3;
};

}