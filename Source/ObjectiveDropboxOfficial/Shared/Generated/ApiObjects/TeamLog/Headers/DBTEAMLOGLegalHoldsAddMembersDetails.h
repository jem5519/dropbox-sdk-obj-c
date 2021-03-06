///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLegalHoldsAddMembersDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsAddMembersDetails` struct.
///
/// Added members to a hold.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLegalHoldsAddMembersDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Hold ID.
@property (nonatomic, readonly, copy) NSString *legalHoldId;

/// Hold name.
@property (nonatomic, readonly, copy) NSString *name;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param legalHoldId Hold ID.
/// @param name Hold name.
///
/// @return An initialized instance.
///
- (instancetype)initWithLegalHoldId:(NSString *)legalHoldId name:(NSString *)name;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsAddMembersDetails` struct.
///
@interface DBTEAMLOGLegalHoldsAddMembersDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGLegalHoldsAddMembersDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGLegalHoldsAddMembersDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLegalHoldsAddMembersDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGLegalHoldsAddMembersDetails *)instance;

///
/// Deserializes `DBTEAMLOGLegalHoldsAddMembersDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLegalHoldsAddMembersDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGLegalHoldsAddMembersDetails`
/// object.
///
+ (DBTEAMLOGLegalHoldsAddMembersDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
