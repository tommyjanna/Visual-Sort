#ifndef LIST_H
#define LIST_H


class List
{
    public:
        List();
        virtual ~List();

        void BubbleSort();
    private:
        class Node
        {
            int content;

        };

        int size;
        Node contents[];
};

#endif // LIST_H
