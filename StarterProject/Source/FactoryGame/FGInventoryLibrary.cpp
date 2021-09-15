// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInventoryLibrary.h"

UFGInventoryComponent* UFGInventoryLibrary::CreateInventoryComponent(  AActor* owner, FName name){ return nullptr; }
UFGInventoryComponent* UFGInventoryLibrary::CreateInventoryComponentOfClass(  AActor* owner,
																		 UPARAM( DisplayName = "Class" ) TSubclassOf<  UFGInventoryComponent > inClass,
																		 FName name){ return nullptr; }
void UFGInventoryLibrary::BreakInventoryStack( UPARAM( ref ) const FInventoryStack& stack,
									 UPARAM( DisplayName = "Num Items" ) int32& out_numItems,
									 UPARAM( DisplayName = "Item" ) FInventoryItem& out_item){ }
void UFGInventoryLibrary::BreakInventoryItem( UPARAM( ref ) const FInventoryItem& item,
									UPARAM( DisplayName = "Class" ) TSubclassOf<  UFGItemDescriptor >& out_itemClass,
									UPARAM( DisplayName = "State" )  AActor*& out_itemState){ }
FInventoryItem UFGInventoryLibrary::MakeInventoryItem( UPARAM( DisplayName = "Class" ) TSubclassOf<  UFGItemDescriptor > itemClass){ return FInventoryItem(); }
FInventoryStack UFGInventoryLibrary::MakeInventoryStack( int32 numItems, FInventoryItem item){ return FInventoryStack(); }
bool UFGInventoryLibrary::MoveInventoryItem(  UFGInventoryComponent* sourceComponent, int32 sourceIdx,  UFGInventoryComponent* destinationComponent, int32 destinationIdx){ return bool(); }
bool UFGInventoryLibrary::GrabAllItemsFromInventory( UFGInventoryComponent* sourceComponent, UFGInventoryComponent* destinationComponent, TSubclassOf< UFGItemDescriptor > onlyGrabOfDesc ){ return bool(); }
void UFGInventoryLibrary::ConsolidateInventoryItems( UPARAM( ref ) TArray< FInventoryStack >& items){ }
int32 UFGInventoryLibrary::GetMinNumSlotsForItems( UPARAM( ref ) TArray< FInventoryStack >& items){ return int32(); }
void UFGInventoryLibrary::MergeInventoryItem( UPARAM( ref ) TArray< FInventoryStack >& items, const FInventoryStack& item){ }
void UFGInventoryLibrary::ConsolidateItemsAmount( UPARAM( ref ) TArray< FItemAmount >& items){ }
