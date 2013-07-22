//
//  Profile.m
//  Girlz
//
//  Created by Talia Segev on 7/22/13.
//  Copyright (c) 2013 talia@keren. All rights reserved.
//

#import "Profile.h"


@implementation Profile
    

-(id)initWithUserName:(NSString *)_userName Password:(NSString *)_password Email:(NSString *)_email{
    
    self = [super init];
    
    if (self){
        userName = _userName;
        password = _password;
        email = _email;
    }
    
    return self;
}

-(NSString *)description{
    
    return [[NSString alloc]initWithFormat:@"username:%@ password:%@ email %@",userName,password,email];
}



@end
