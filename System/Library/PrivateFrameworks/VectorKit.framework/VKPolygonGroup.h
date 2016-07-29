/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKVectorTile;

@interface VKPolygonGroup : NSObject {

	shared_ptr<gss::PolygonDrawStyle>* _cachedPolygonStyle;
	VKVectorTile* _tile;
	float _contentScale;
	unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > >* _extrusionFillMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > >* _extrusionStrokeMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > >* _extrusionFillMeshVendorForPointyRoofs;
	unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > >* _extrusionStrokeMeshVendorForPointyRoofs;
	unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> > >* _pointyRoofFillMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > >* _pointyRoofStrokeMeshVendor;
	unsigned _cullingMask;
	MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>* _fillMeshInfo;
	MeshSet<ggl::PolygonMesh::MeshMesh, ggl::PolygonMesh::DefaultVbo>* _strokeMeshInfo;
	MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>* _fillMeshInfoForPointyRoofs;
	unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> >, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > >* _polygonEdges;
	shared_ptr<gss::StyleQuery>* _styleQuery;
	vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher> >* _fillRenderItemBatchers;
	vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher> >* _strokeRenderItemBatchers;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _fillCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _strokeCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionFillCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionStrokeCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _fillCullingGroupsForPointyRoofs;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionFillCullingGroupsForPointyRoofs;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionStrokeCullingGroupsForPointyRoofs;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _pointyRoofFillCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _pointyRoofStrokeCullingGroups;
	Box<float, 3> _boundingBox;
	BOOL _isFixedSize;
	Matrix<float, 2, 1> _centroid;
	FeatureAttributeSet* _originalFeatureAttributes;

}

@property (nonatomic,readonly) BOOL isFixedSize;                                                                                                  //@synthesize isFixedSize=_isFixedSize - In the implementation block
@property (nonatomic,readonly) Matrix<float centroid;                                                                                             //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) float tileZoom; 
@property (nonatomic,readonly) Matrix<float origin; 
@property (nonatomic,readonly) Matrix<float size; 
@property (nonatomic,readonly) unsigned cullingMask;                                                                                              //@synthesize cullingMask=_cullingMask - In the implementation block
@property (nonatomic,readonly) shared_ptr<gss::StyleQuery>* styleQuery;                                                                           //@synthesize styleQuery=_styleQuery - In the implementation block
@property (nonatomic,readonly) vector<ggl::PolygonBase::CompressedMeshMesh* fillMeshes; 
@property (nonatomic,readonly) vector<ggl::PolygonMesh::MeshMesh* strokeMeshes; 
@property (nonatomic,readonly) const MeshVendor<ggl::Building::BuildingMesh>* extrusionFillMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>* extrusionStrokeMeshVendor; 
@property (nonatomic,readonly) vector<ggl::PolygonBase::CompressedMeshMesh* fillMeshesForPointyRoofs; 
@property (nonatomic,readonly) const MeshVendor<ggl::Building::BuildingMesh>* extrusionFillMeshVendorForPointyRoofs; 
@property (nonatomic,readonly) const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>* extrusionStrokeMeshVendorForPointyRoofs; 
@property (nonatomic,readonly) const MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>* pointyRoofFillMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>* pointyRoofStrokeMeshVendor; 
-(Matrix<float)size;
-(void)dealloc;
-(Matrix<float)origin;
-(Matrix<float)centroid;
-(void)setRouteAttributes:(const PolygonRouteAttributes*)arg1 ;
-(void)addRangesToPointyRoofTopRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToPointyRoofExtrusionStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToExtrusionFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToExtrusionStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToPointyRoofFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(void)addRangesToStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MeshVendor<ggl::Building::BuildingMesh>*)extrusionFillMeshVendorForPointyRoofs;
-(const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>*)extrusionStrokeMeshVendor;
-(vector<ggl::PolygonBase::CompressedMeshMesh*)fillMeshes;
-(const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>*)pointyRoofStrokeMeshVendor;
-(const MeshVendor<ggl::Building::BuildingMesh>*)extrusionFillMeshVendor;
-(const MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>*)pointyRoofFillMeshVendor;
-(void)addRangesToPointyRoofStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(vector<ggl::PolygonBase::CompressedMeshMesh*)fillMeshesForPointyRoofs;
-(const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>*)extrusionStrokeMeshVendorForPointyRoofs;
-(void)addRangesToPointyRoofExtrusionFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(vector<ggl::PolygonMesh::MeshMesh*)strokeMeshes;
-(void)updateCachedStyle;
-(shared_ptr<gss::StyleQuery>*)styleQuery;
-(BOOL)isFixedSize;
-(unsigned)cullingMask;
-(float)tileZoom;
-(void)addPolygon:(SCD_Struct_VK321*)arg1 building:(SCD_Struct_VK399*)arg2 index:(unsigned long long)arg3 ofTotal:(unsigned long long)arg4 hasNonWaterStyle:(BOOL)arg5 accessor:(ResourceAccessor*)arg6 triangulator:(id)arg7 prepareExtrusion:(BOOL)arg8 forRoofStyle:(int)arg9 scaleThreshold:(float)arg10 ;
-(void)prepareForPolygon:(SCD_Struct_VK321*)arg1 building:(SCD_Struct_VK399*)arg2 hasNonWaterStyle:(BOOL)arg3 forRoofStyle:(int)arg4 scaleThreshold:(float)arg5 ;
-(void)willAddDataWithAccessor:(ResourceAccessor*)arg1 ;
-(void)didFinishAddingData;
-(void)clearRouteAttributes;
-(void)addExtrusionForPolygon:(SCD_Struct_VK321*)arg1 building:(SCD_Struct_VK399*)arg2 index:(unsigned long long)arg3 ofTotal:(unsigned long long)arg4 hasNonWaterStyle:(BOOL)arg5 triangulator:(id)arg6 forRoofStyle:(int)arg7 ;
-(BOOL)addPointyRoofForPolygon:(SCD_Struct_VK321*)arg1 building:(SCD_Struct_VK399*)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4 styleIndex:(float)arg5 ;
-(BOOL)canConstructPointyRoofForPolygon:(SCD_Struct_VK321*)arg1 building:(SCD_Struct_VK399*)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4 ;
-(unsigned char)indexForGeoFeatureAttributes:(id)arg1 ;
-(id)initWithStyleQuery:(shared_ptr<gss::StyleQuery>*)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix<float, 2, 1>*)arg3 contentScale:(float)arg4 ;
@end
