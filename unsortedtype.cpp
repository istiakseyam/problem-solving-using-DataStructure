//
// Created by Istiak Ahmed Seyam on 18/3/20.
//

#ifndef UNSORTEDTYPE_CPP_INCLUDED
#define UNSORTEDTYPE_CPP_INCLUDED

#include "unsortedtype.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    info=new ItemType[MAX_ITEMS];
    length = 0;
    currentPos = -1;
}
template <class ItemType>
UnsortedType<ItemType>::UnsortedType(int a)
{
    info=new ItemType[a];
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void
UnsortedType<ItemType>::GetNextItem(ItemType&
item)
{
    currentPos++;
    item = info [currentPos] ;
}
template <class ItemType>
void
UnsortedType<ItemType>::RetrieveItem(ItemType&
item, bool &found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        if(item == info[location])
        {
            found = true;
            item = info[location];
        }
        else
        {
            location++;
            moreToSearch = (location < length);
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType
                                        item)
{
    info[length] = item;
    length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType
                                        item)
{
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType() {
    delete []info;

}


#endif //LABMID_UNSORTEDTYPE_H