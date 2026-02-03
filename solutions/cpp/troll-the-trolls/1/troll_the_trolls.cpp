namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus { troll, guest, user, mod };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action { read, write, remove };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer)
    {
        if (poster == AccountStatus::troll && viewer != AccountStatus::troll)
        {
            return false;
        } else return true;
    };

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action, AccountStatus status)
    {
        switch (status)
        {
        case AccountStatus::guest:
            if (action == Action::read)
            {
                return true;
            }
            return false;

        case AccountStatus::user:
            if (action == Action::remove)
            {
                return false;
            }
            return true;
        case AccountStatus::mod:
            return true;
        case AccountStatus::troll:
            if (action == Action::remove)
            {
                return false;
            }
            return true;
        }
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player_1, AccountStatus player_2)
    {
        if (player_1 == AccountStatus::troll && player_2 == AccountStatus::troll) {
            return true;
        } else if (player_1 == AccountStatus::user && (player_2 == AccountStatus::user || player_2 == AccountStatus::mod))
        {
            return true;
        } else if (player_1 == AccountStatus::guest || player_2 == AccountStatus::guest)
        {
            return false;
        } else if ((player_1 == AccountStatus::troll || player_2 == AccountStatus::troll) && player_2 != AccountStatus::troll)
        {
            return false;
        } return false;
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus player_1, AccountStatus player_2)
    {
        int player_1_score{0};
        int player_2_score{0};
        switch (player_1)
        {
        case AccountStatus::mod:
            player_1_score = 4;
            break;
        case AccountStatus::user:
            player_1_score = 3;
            break;
        case AccountStatus::guest:
            player_1_score = 2;
            break;
        case AccountStatus::troll:
            player_1_score = 1;
        }
        switch (player_2) {
            case AccountStatus::mod:
            player_2_score = 4;
        break;
            case AccountStatus::user:
            player_2_score = 3;
        break;
        case AccountStatus::guest:
            player_2_score = 2;
            break;
        case AccountStatus::troll:
            player_2_score = 1;
        }
        return player_1_score > player_2_score;
    }
}