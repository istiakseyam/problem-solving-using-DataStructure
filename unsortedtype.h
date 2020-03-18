//
// Created by Istiak Ahmed Seyam on 18/3/20.
//

#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class UnsortedType
{
 public :
 UnsortedType();
 UnsortedType(int);
 void MakeEmpty();
 bool IsFull();
 int LengthIs();
 void InsertItem(ItemType);
 void DeleteItem(ItemType);
 void RetrieveItem(ItemType&, bool&);
 void ResetList();
 void GetNextItem(ItemType&);
 ~UnsortedType();
 private:
 int length;
 ItemType *info;
 int currentPos;
};

#endif //LABMID_UNSORTEDTYPE_H

#include "unsortedtype.cpp"
