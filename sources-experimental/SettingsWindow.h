#include <Window.h>
#include <View.h>
#include <Box.h>
#include <Button.h>
#include <CheckBox.h>
#include <RadioButton.h>
#include <MenuItem.h>
#include <MenuField.h>
#include <TextControl.h>
#include <PopUpMenu.h>
#include <Message.h>
#include <ListView.h>
#include <ObjectList.h>

#define	APPLY_SETTINGS	'apse'


class SettingsWindow: public BWindow
{




 public:
					 			SettingsWindow(BMessage*,BHandler*,int32);
			
			virtual	void	MessageReceived(BMessage*);
			virtual	bool  	QuitRequested();
			
			BMessage*	GetSetting(){ return fSetting; }		
			
 protected:
 
 					
 					void	Select(int i);	
 					void	AddBox(const char*,BBox*);
 					
 private:					
 					
 					void		SaveSettings();	
 				
 					BListView *slist;
 					BView *bgView;
 					BView	*dxview;
 					
 					BObjectList<BBox>		fBoxList;
 					BBox*	fSelected;
 					BRect dxrect,trect;
 
 					BMessage*	fSetting;
 					BHandler*		fHandler;
 					int32			fApplyWhatMsg;
 };	
