type t = Dom.element;

external asNode : t => Dom.node = "%identity";
external asEventTarget : t => Dom.eventTarget = "%identity";

/* Element interface */
external assignedSlot : t => t = "" [@@bs.get]; /* experimental, returns HTMLSlotElement */
external attributes : t => array Dom.attr = "" [@@bs.get]; /* return NameNodeMap, not array */
external classList : t => Dom.domTokenList = "" [@@bs.get];
external className : t => string = "" [@@bs.get];
external setClassName : t => string => unit = "className" [@@bs.set];
external clientHeight : t => int = "" [@@bs.get]; /* experimental */
external clientLeft : t => int = "" [@@bs.get]; /* experimental */
external clientTop : t => int = "" [@@bs.get]; /* experimental */
external clientWidth : t => int = "" [@@bs.get]; /* experimental */
external id : t => string = "" [@@bs.get];
external setId : t => string => unit = "id" [@@bs.set];
external innerHTML : t => string = "" [@@bs.get];
external setInnerHTML : t => string => unit = "innerHTML" [@@bs.set];
external localName : t => string = "" [@@bs.get];
external namespaceURI : t => Js.null string = "" [@@bs.get];
let namespaceURI : t => option string = fun self => Js.Null.to_opt (namespaceURI self);
external nextElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
let nextElementSibling : t => option t = fun self => Js.Null.to_opt (nextElementSibling self);
external outerHTML : t => string = "" [@@bs.get]; /* experimental, but widely supported */
external setOuterHTML : t => string => unit = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
external prefix : t => Js.null string = "" [@@bs.get];
let prefix : t => option string = fun self => Js.Null.to_opt (prefix self);
external previousElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
let previousElementSibling : t => option t = fun self => Js.Null.to_opt (previousElementSibling self);
external scrollHeight : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external scrollLeft : t => int = "" [@@bs.get]; /* experimental */
external setScrollLeft : t => int => unit = "scrollLeft" [@@bs.set]; /* experimental */
external scrollTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external setScrollTop : t => int => unit = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
external scrollWidth : t => int = "" [@@bs.get]; /* experimental */
external shadowRoot : t => t = "" [@@bs.get]; /* experimental */
external slot : t => string = "" [@@bs.get]; /* experimental */
external setSlot : t => string => unit = "slot" [@@bs.set]; /* experimental */
external tagName : t => string = "" [@@bs.get];

external attachShadow : Js.t {..} => Dom.shadowRoot  = "" [@@bs.send.pipe: t]; /* experimental */
external animate : Js.t {..} => Js.t {..} => Dom.animation = "" [@@bs.send.pipe: t]; /* experimental */
external closest : string => t = "" [@@bs.send.pipe: t]; /* experimental */
external createShadowRoot : Dom.shadowRoot = "" [@@bs.send.pipe: t]; /* experimental AND deprecated (?!) */
external getAttribute : string => Js.null string = "" [@@bs.send.pipe: t];
let getAttribute : string => t => option string = fun name self => Js.Null.to_opt (getAttribute name self);
external getAttributeNS : string => string => Js.null string = "" [@@bs.send.pipe: t];
let getAttributeNS : string => string => t => option string = fun ns name self => Js.Null.to_opt (getAttributeNS ns name self);
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t];
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t];
external getElementsByClassName : string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external getElementsByTagName : string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external getElementsByTagNameNS : string => string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external hasAttribute : string => Js.boolean = "" [@@bs.send.pipe: t];
let hasAttribute : string => t => bool = fun name self => Js.to_bool (hasAttribute name self);
external hasAttributeNS : string => string => Js.boolean = "" [@@bs.send.pipe: t];
let hasAttributeNS : string => string => t => bool = fun ns name self => Js.to_bool (hasAttributeNS ns name self);
external hasAttributes : Js.boolean = "" [@@bs.send.pipe: t];
let hasAttributes : t => bool = fun self => Js.to_bool (hasAttributes self);
external insertAdjacentElement : string /* enum */ => t => Js.null t = "" [@@bs.send.pipe: t]; /* experimental */
let insertAdjacentElement : string => t => t => option t = fun position element self => Js.Null.to_opt (insertAdjacentElement position element self);
external insertAdjacentText : string /* enum */ => string => Js.null string = "" [@@bs.send.pipe: t]; /* experimental */
let insertAdjacentText : string => string => t => option string = fun position text self => Js.Null.to_opt (insertAdjacentText position text self);
external matches : string => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let matches : string => t => bool = fun selector self => Js.to_bool (matches selector self);
external querySelector : string => Js.null t = "" [@@bs.send.pipe: t];
let querySelector : string => t => option t = fun selector self => Js.Null.to_opt (querySelector selector self);
external querySelectorAll : string => array t = "" [@@bs.send.pipe: t]; /* returns NodeList, not array */
external releasePointerCapture : Dom.eventPointerId => unit = "" [@@bs.send.pipe: t];
external remove : unit = "" [@@bs.send.pipe: t]; /* experimental */
external removeAttribute : string => unit = "" [@@bs.send.pipe: t];
external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: t];
external requestFullscreen : unit = "" [@@bs.send.pipe: t]; /* experimental */
external requestPointerLock : unit = "" [@@bs.send.pipe: t]; /* experimental */
external scrollIntoView : unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external scrollIntoViewNoAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let scrollIntoViewNoAlignToTop : t => unit = fun self => scrollIntoViewNoAlignToTop (Js.Boolean.to_js_boolean true) self;
external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental */
external setAttribute : string => string => unit = "" [@@bs.send.pipe: t];
external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: t];
external setPointerCapture : Dom.eventPointerId => unit = "" [@@bs.send.pipe: t];

/* HTMLElement interface */
external accessKey : t => string = "" [@@bs.get];
external setAccessKey : t => string => unit = "accessKey" [@@bs.set];
external accessKeyLabel : t => string = "" [@@bs.get];
external contentEditable : t => string /* enum */ = "" [@@bs.get];
external setContentEditable : t => string /* enum */ => unit = "contentEditable" [@@bs.set];
external isContentEditable : t => Js.boolean = "" [@@bs.get];
let isContentEditable : t => bool = fun self => Js.to_bool (isContentEditable self);
external contextMenu : t => t = "" [@@bs.get]; /* returns HTMLMenuElement */
external setContextMenu : t => t => unit = "contextMenu" [@@bs.set]; /* accepts and returns HTMLMenuElement */
external dataset : t => Dom.domStringMap = "" [@@bs.get];
external dir : t => string /* enum */ = "" [@@bs.get];
external setDir : t => string /* enum */ => unit = "dir" [@@bs.set];
external draggable : t => Js.boolean = "" [@@bs.get];
let draggable : t => bool = fun self => Js.to_bool (draggable self);
external setDraggable : t => Js.boolean => unit = "draggable" [@@bs.set];
let setDraggable : t => bool => unit = fun self value => setDraggable self (Js.Boolean.to_js_boolean value);
external dropzone : t => Dom.domSettableTokenList = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
let hidden : t => bool = fun self => Js.to_bool (hidden self);
external setHidden : t => Js.boolean => unit = "hidden" [@@bs.set];
let setHidden : t => bool => unit = fun self value => setHidden self (Js.Boolean.to_js_boolean value);
external itemScope : t => Js.boolean = "" [@@bs.get]; /* experimental */
let itemScope : t => bool = fun self => Js.to_bool (itemScope self);
external setItemScope : t => Js.boolean => unit = "itemScope" [@@bs.set]; /* experimental */
let setItemScope : t => bool => unit = fun self value => setItemScope self (Js.Boolean.to_js_boolean value);
external itemType : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemId : t => string = "" [@@bs.get]; /* experimental */
external setItemId : t => string => unit = "itemId" [@@bs.set]; /* experimental */
external itemRef : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemProp : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemValue : t => Js.t {..} = "" [@@bs.get]; /* experimental */
external setItemValue : t => Js.t {..} => unit = "itemValue" [@@bs.set]; /* experimental */
external lang : t => string = "" [@@bs.get];
external setLang : t => string => unit = "lang" [@@bs.set];
external offsetHeight : t => int = "" [@@bs.get]; /* experimental */
external offsetLeft : t => int = "" [@@bs.get]; /* experimental */
external offsetParent : t => int = "" [@@bs.get]; /* experimental */
external offsetTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external offsetWidth : t => int = "" [@@bs.get]; /* experimental */
/*external properties : r => HTMLPropertiesCollection.t = "properties" [@@bs.get]; /* experimental */*/
external spellcheck : t => Js.boolean = "" [@@bs.get];
let spellcheck : t => bool = fun self => Js.to_bool (spellcheck self);
external setSpellcheck : t => Js.boolean => unit = "spellcheck" [@@bs.set];
let setSpellcheck : t => bool => unit = fun self value => setSpellcheck self (Js.Boolean.to_js_boolean value);
external style : t => Dom.cssStyleDeclaration = "" [@@bs.get];
external setStyle : t => Dom.cssStyleDeclaration => unit = "style" [@@bs.set];
external tabIndex : t => int = "" [@@bs.get];
external setTabIndex : t => int => unit = "tabIndex" [@@bs.set];
external title : t => string = "" [@@bs.get];
external setTitle : t => string => unit = "title" [@@bs.set];
external translate : t => Js.boolean = "" [@@bs.get]; /* experimental */
let translate : t => bool = fun self => Js.to_bool (translate self);
external setTranslate : t => Js.boolean => unit = "translate" [@@bs.set]; /* experimental */
let setTranslate : t => bool => unit = fun self value => setTranslate self (Js.Boolean.to_js_boolean value);

external blur : unit = "" [@@bs.send.pipe: t];
external click : unit = "" [@@bs.send.pipe: t];
external focus : unit = "" [@@bs.send.pipe: t];
external forceSpellCheck : unit = "" [@@bs.send.pipe: t]; /* experimental */

/* GlobalEventHandlers interface */
/* Not sure this should be exposed, since EventTarget seems like a better API */

/* element-specific */
external value : t => string = "" [@@bs.get];
external checked : t => Js.boolean = "" [@@bs.get];
let checked : t => bool = fun value => Js.to_bool (checked value);
