//
//  Profile.h
//  Girlz
//
//  Created by Talia Segev on 7/22/13.
//  Copyright (c) 2013 talia@keren. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, FoodHabit) {
    VEGETARIAN,
    VEGAN,
    EVERYTHING
};

typedef NS_ENUM(NSUInteger, SmokingHabit) {
    NONSMOKER,
    SOCIALSMOKER,
    SMOKER
};

typedef NS_ENUM(NSUInteger, Education) {
    DOCTOR_UP,
    MA,
    BA,
    DIPLOMA, // TEUDA
    HIGHSCHOOL
};

typedef NS_ENUM(NSUInteger, EconomyStatus) {
    MEVUSESET,
    AVERAGE,
    UNDER_AVERAGE
};

typedef NS_ENUM(NSUInteger, WantKids) {
    NEVER,
    SOMETIME,
    IN_THE_NEAR_FUTURE,
    HAVE_KIDS
};


@interface Profile : NSObject{
    
    
    // iVars
    
    // Mandatory Fields
    NSString *userName, *password, *email;
    NSString *city;
    
    // Optional Fields
    NSString *aboutMe, *doingRightNow, *educationField;
    
    double hight;
    NSDate *dateOfBirth;
    
    FoodHabit foodHabit;
    SmokingHabit smokehabit;
    Education education;
    EconomyStatus ecoStatus;
    WantKids wantKids;
    
    //range fields
    int fridayEve;
    
    

}

    //functions


-(id)initWithUserName:(NSString *)_userName Password:(NSString *)_password Email:(NSString *)_email;



@end
