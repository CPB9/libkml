// Copyright 2008, Google Inc. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//  3. Neither the name of Google Inc. nor the names of its contributors may be
//     used to endorse or promote products derived from this software without
//     specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef KML_DOM_KML_PTR_H__
#define KML_DOM_KML_PTR_H__

#include <bmcl/Rc.h>

namespace kmldom {

class Element;
class Field;

class AbstractLatLonBox;
class AbstractLink;
class AbstractView;
class BasicLink;
class ColorStyle;
class Container;
class Feature;
class Geometry;
class Object;
class Overlay;
class StyleSelector;
class SubStyle;
class TimePrimitive;
class Vec2;

class Alias;
class AtomAuthor;
class AtomCategory;
class AtomContent;
class AtomEntry;
class AtomFeed;
class AtomLink;
class BalloonStyle;
class Camera;
class Change;
class Coordinates;
class Create;
class Data;
class Delete;
class Document;
class ExtendedData;
class Folder;
class GroundOverlay;
class Icon;
class IconStyle;
class IconStyleIcon;
class ImagePyramid;
class ItemIcon;
class LabelStyle;
class LatLonAltBox;
class LatLonBox;
class LineString;
class LineStyle;
class LinearRing;
class Link;
class ListStyle;
class Location;
class Lod;
class LookAt;
class Metadata;
class Model;
class MultiGeometry;
class NetworkLink;
class NetworkLinkControl;
class Orientation;
class Pair;
class PhotoOverlay;
class Placemark;
class Point;
class PolyStyle;
class Polygon;
class Region;
class ResourceMap;
class Scale;
class Schema;
class SchemaData;
class ScreenOverlay;
class SimpleData;
class SimpleField;
class Snippet;
class Style;
class StyleMap;
class TimeSpan;
class TimeStamp;
class Update;
class UpdateOperation;
class Url;
class ViewVolume;
class HotSpot;
class InnerBoundaryIs;
class Kml;
class LinkSnippet;
class OuterBoundaryIs;
class OverlayXY;
class RotationXY;
class ScreenXY;
class Size;

class XalAddressDetails;
class XalAdministrativeArea;
class XalCountry;
class XalLocality;
class XalPostalCode;
class XalSubAdministrativeArea;
class XalThoroughfare;

class GxAnimatedUpdate;
class GxFlyTo;
class GxLatLonQuad;
class GxMultiTrack;
class GxPlaylist;
class GxSimpleArrayField;
class GxSimpleArrayData;
class GxSoundCue;
class GxTimeSpan;
class GxTimeStamp;
class GxTimePrimitive;
class GxTour;
class GxTourControl;
class GxTourPrimitive;
class GxTrack;
class GxWait;

typedef bmcl::Rc<Element> ElementPtr;
typedef bmcl::Rc<Field> FieldPtr;

typedef bmcl::Rc<AbstractLatLonBox> AbstractLatLonBoxPtr;
typedef bmcl::Rc<AbstractLink> AbstractLinkPtr;
typedef bmcl::Rc<AbstractView> AbstractViewPtr;
typedef bmcl::Rc<BasicLink> BasicLinkPtr;
typedef bmcl::Rc<ColorStyle> ColorStylePtr;
typedef bmcl::Rc<Container> ContainerPtr;
typedef bmcl::Rc<Feature> FeaturePtr;
typedef bmcl::Rc<Geometry> GeometryPtr;
typedef bmcl::Rc<Object> ObjectPtr;
typedef bmcl::Rc<Overlay> OverlayPtr;
typedef bmcl::Rc<StyleSelector> StyleSelectorPtr;
typedef bmcl::Rc<SubStyle> SubStylePtr;
typedef bmcl::Rc<TimePrimitive> TimePrimitivePtr;
typedef bmcl::Rc<Vec2> Vec2Ptr;

typedef bmcl::Rc<Alias> AliasPtr;
typedef bmcl::Rc<AtomAuthor> AtomAuthorPtr;
typedef bmcl::Rc<AtomCategory> AtomCategoryPtr;
typedef bmcl::Rc<AtomContent> AtomContentPtr;
typedef bmcl::Rc<AtomEntry> AtomEntryPtr;
typedef bmcl::Rc<AtomFeed> AtomFeedPtr;
typedef bmcl::Rc<AtomLink> AtomLinkPtr;
typedef bmcl::Rc<BalloonStyle> BalloonStylePtr;
typedef bmcl::Rc<Camera> CameraPtr;
typedef bmcl::Rc<Change> ChangePtr;
typedef bmcl::Rc<Coordinates> CoordinatesPtr;
typedef bmcl::Rc<Create> CreatePtr;
typedef bmcl::Rc<Data> DataPtr;
typedef bmcl::Rc<Delete> DeletePtr;
typedef bmcl::Rc<Document> DocumentPtr;
typedef bmcl::Rc<ExtendedData> ExtendedDataPtr;
typedef bmcl::Rc<Folder> FolderPtr;
typedef bmcl::Rc<GroundOverlay> GroundOverlayPtr;
typedef bmcl::Rc<Icon> IconPtr;
typedef bmcl::Rc<IconStyle> IconStylePtr;
typedef bmcl::Rc<IconStyleIcon> IconStyleIconPtr;
typedef bmcl::Rc<ImagePyramid> ImagePyramidPtr;
typedef bmcl::Rc<ItemIcon> ItemIconPtr;
typedef bmcl::Rc<LabelStyle> LabelStylePtr;
typedef bmcl::Rc<LatLonAltBox> LatLonAltBoxPtr;
typedef bmcl::Rc<LatLonBox> LatLonBoxPtr;
typedef bmcl::Rc<LineString> LineStringPtr;
typedef bmcl::Rc<LineStyle> LineStylePtr;
typedef bmcl::Rc<LinearRing> LinearRingPtr;
typedef bmcl::Rc<Link> LinkPtr;
typedef bmcl::Rc<ListStyle> ListStylePtr;
typedef bmcl::Rc<Location> LocationPtr;
typedef bmcl::Rc<Lod> LodPtr;
typedef bmcl::Rc<LookAt> LookAtPtr;
typedef bmcl::Rc<Metadata> MetadataPtr;
typedef bmcl::Rc<Model> ModelPtr;
typedef bmcl::Rc<MultiGeometry> MultiGeometryPtr;
typedef bmcl::Rc<NetworkLink> NetworkLinkPtr;
typedef bmcl::Rc<NetworkLinkControl> NetworkLinkControlPtr;
typedef bmcl::Rc<Orientation> OrientationPtr;
typedef bmcl::Rc<Pair> PairPtr;
typedef bmcl::Rc<PhotoOverlay> PhotoOverlayPtr;
typedef bmcl::Rc<Placemark> PlacemarkPtr;
typedef bmcl::Rc<Point> PointPtr;
typedef bmcl::Rc<PolyStyle> PolyStylePtr;
typedef bmcl::Rc<Polygon> PolygonPtr;
typedef bmcl::Rc<Region> RegionPtr;
typedef bmcl::Rc<ResourceMap> ResourceMapPtr;
typedef bmcl::Rc<Scale> ScalePtr;
typedef bmcl::Rc<Schema> SchemaPtr;
typedef bmcl::Rc<SchemaData> SchemaDataPtr;
typedef bmcl::Rc<ScreenOverlay> ScreenOverlayPtr;
typedef bmcl::Rc<SimpleData> SimpleDataPtr;
typedef bmcl::Rc<SimpleField> SimpleFieldPtr;
typedef bmcl::Rc<Snippet> SnippetPtr;
typedef bmcl::Rc<Style> StylePtr;
typedef bmcl::Rc<StyleMap> StyleMapPtr;
typedef bmcl::Rc<TimeSpan> TimeSpanPtr;
typedef bmcl::Rc<TimeStamp> TimeStampPtr;
typedef bmcl::Rc<Update> UpdatePtr;
typedef bmcl::Rc<UpdateOperation> UpdateOperationPtr;
typedef bmcl::Rc<Url> UrlPtr;
typedef bmcl::Rc<ViewVolume> ViewVolumePtr;
typedef bmcl::Rc<HotSpot> HotSpotPtr;
typedef bmcl::Rc<InnerBoundaryIs> InnerBoundaryIsPtr;
typedef bmcl::Rc<Kml> KmlPtr;
typedef bmcl::Rc<LinkSnippet> LinkSnippetPtr;
typedef bmcl::Rc<OuterBoundaryIs> OuterBoundaryIsPtr;
typedef bmcl::Rc<OverlayXY> OverlayXYPtr;
typedef bmcl::Rc<RotationXY> RotationXYPtr;
typedef bmcl::Rc<ScreenXY> ScreenXYPtr;
typedef bmcl::Rc<Size> SizePtr;

typedef bmcl::Rc<XalAddressDetails> XalAddressDetailsPtr;
typedef bmcl::Rc<XalAdministrativeArea> XalAdministrativeAreaPtr;
typedef bmcl::Rc<XalCountry> XalCountryPtr;
typedef bmcl::Rc<XalLocality> XalLocalityPtr;
typedef bmcl::Rc<XalPostalCode> XalPostalCodePtr;
typedef bmcl::Rc<XalSubAdministrativeArea> XalSubAdministrativeAreaPtr;
typedef bmcl::Rc<XalThoroughfare> XalThoroughfarePtr;

typedef bmcl::Rc<GxAnimatedUpdate> GxAnimatedUpdatePtr;
typedef bmcl::Rc<GxFlyTo> GxFlyToPtr;
typedef bmcl::Rc<GxLatLonQuad> GxLatLonQuadPtr;
typedef bmcl::Rc<GxMultiTrack> GxMultiTrackPtr;
typedef bmcl::Rc<GxPlaylist> GxPlaylistPtr;
typedef bmcl::Rc<GxSimpleArrayField> GxSimpleArrayFieldPtr;
typedef bmcl::Rc<GxSimpleArrayData> GxSimpleArrayDataPtr;
typedef bmcl::Rc<GxSoundCue> GxSoundCuePtr;
typedef bmcl::Rc<GxTimeSpan> GxTimeSpanPtr;
typedef bmcl::Rc<GxTimeStamp> GxTimeStampPtr;
typedef bmcl::Rc<GxTour> GxTourPtr;
typedef bmcl::Rc<GxTourControl> GxTourControlPtr;
typedef bmcl::Rc<GxTourPrimitive> GxTourPrimitivePtr;
typedef bmcl::Rc<GxTrack> GxTrackPtr;
typedef bmcl::Rc<GxWait> GxWaitPtr;

}  // end namespace kmldom

#endif  // KML_DOM_KML_PTR_H__
