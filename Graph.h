//
// Created by mo018152 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_MERICOKCU_GRAPH_H
#define GRAPH_PUZZLE_GAME_MERICOKCU_GRAPH_H

#include "AbstractGraph.h"
#include "Edge.h"

namespace array{
    class Graph : public AbstractGraph{
    private:
        int** edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        int** floydWarshall();
        void prim();
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
        Edge* edgeList(int& edgeCount) override;
    };

}

#endif //GRAPH_PUZZLE_GAME_MERICOKCU_GRAPH_H
