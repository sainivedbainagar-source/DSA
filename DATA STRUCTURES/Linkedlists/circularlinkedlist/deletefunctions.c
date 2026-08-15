
delete at beg//
void del_start()
{
    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    if(head == tail)
    {
        free(head);
        head = tail = NULL;
        return;
    }

    ptr = head;
    head = head->next;
    tail->next = head;
    free(ptr);
}
delete at end
void del_end()
{
    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    if(head == tail)
    {
        free(head);
        head = tail = NULL;
        return;
    }

    ptr = head;

    while(ptr->next != tail)
    {
        ptr = ptr->next;
    }

    ptr->next = head;
    free(tail);
    tail = ptr;
}



delete at any

void del_any()
{
    int pos;

    printf("Enter position\n");
    scanf("%d", &pos);

    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    if(pos == 1)
    {
        del_start();
        return;
    }

    ptr = head;

    for(int i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next;

        if(ptr == head)
        {
            printf("Not possible\n");
            return;
        }
    }

    ptr1 = ptr->next;
    ptr->next = ptr1->next;

    if(ptr1 == tail)
        tail = ptr;

    free(ptr1);
    tail->next = head;
}
