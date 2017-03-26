/*
Sheet2 Q1. Modify the selection sort to be used for a linked list.
*/

void SelectionSort()
{
    //special cases
    if(isEmpty()) return; //Empty
    if(head->next==nullptr) return; // one element no need to sort
    //our stop
    Node *stop = nullptr;
    // loop till we stop at 2nd item
    while(stop != head->next)
    {
        Node *maxv = head; //Max node
        Node *temp = head->next; // traversing node
        while(1)
        {
            //compare the data
            if(tmp->data > maxv->data)
                maxv = temp;
            //if the next item is our stop make the current item the next iteration stop
            if(temp->next == stop)
            {
                stop = temp;
                break;
            }
            //traverse as we didn't reach the stop
            temp = temp->next;
        }
        //Swap contents
        int v = temp->data;
        temp->data = maxv->data;
        maxv->data = v;
    }
}
