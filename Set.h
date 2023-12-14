//
// Created by mo018152 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_MERICOKCU_SET_H
#define GRAPH_PUZZLE_GAME_MERICOKCU_SET_H

class Set {
private:
    int data;
    int parent;
    int depth;
public:
    Set(int data, int index);
    Set();
    int getParent() const;
    int getDepth() const;
    void setParent(int parent);
    void incrementDepth();
};

#endif //GRAPH_PUZZLE_GAME_MERICOKCU_SET_H
