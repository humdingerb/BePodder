#ifndef _ItemProperty_H_
#define _ItemProperty_H_

//revision 0.1 // 20 sett 2005

enum ItemProperty {

  IP_SYSTEM_ID_LOW,		// a system id is a 64bit number.
  IP_SYSTEM_ID_HIGH,	// you need 2 key (of int32) to store/retrive the value.	
  
  ITEM_TITLE, 		// "title"
  ITEM_PUBDATE,		// "pubDate"
  ITEM_GUID,		// "guid"
  ITEM_LINK,		// "link"//?
  ITEM_AUTHOR,			
  ITEM_BLOCK,
  ITEM_CATEGORY,
  ITEM_DURATION,
  ITEM_EXPLICIT, // "Yes" or "No"
  ITEM_KEYWORDS,
  ITEM_SUBTITLE,	//-------|
  ITEM_DESCRIPTION, //-------|	Are these the same info?
  ITEM_SUMMARY,		//-------|
  ITEM_ENCLOSURE_URL,
  ITEM_ENCLOSURE_TYPE,
  ITEM_ENCLOSURE_LENGTH,
  ITEM_ENCLOSURE_LOCALPATH,
  ITEM_ENCLOSURE_FILE_STATUS, //see FileStatus.h
  ITEM_ENCLOSURE_FILE_PERCENTAGE,
  ITEM_ENCLOSURE_DOWNLOAD_SPEED,
  ITEM_ENCLOSURE_DOWNLOADED,
  
  CHANNEL_URL,		//feed url!
  CHANNEL_TITLE,
  CHANNEL_DESCRIPTION,
  CHANNEL_RSS_FILE_STATUS, //see FileStatus.h
  CHANNEL_NEWITEMS,
  CHANNEL_WEBLINK,		// channel home page!
  CHANNEL_COPYRIGHT,
  CHANNEL_BLOCK,
  CHANNEL_CATEGORY,
  CHANNEL_EXPLICIT,
  CHANNEL_KEYWORDS,
  CHANNEL_OWNER,
  CHANNEL_SUBTITLE,
  CHANNEL_SUMMARY,
  CHANNEL_IMAGE_URL,
  CHANNEL_IMAGE_LOCALPATH,		//NOT USED!
  CHANNEL_IMAGE_DATA, 
};



#endif
