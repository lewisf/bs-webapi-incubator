type t;

[@bs.get] external availTop: t => float = "";
[@bs.get] external availLeft: t => float = "";
[@bs.get] external availHeight: t => float = "";
[@bs.get] external availWidth: t => float = "";
[@bs.get] external colorDepth: t => int = "";
[@bs.get] external height: t => float = "";
[@bs.get] external left: t => float = "";
[@bs.get] external orientation: t => float = "";
[@bs.get] external pixelDepth: t => int = "";
[@bs.get] external top: t => float = "";
[@bs.get] external width: t => float = "";
[@bs.get] external mozEnabled: t => bool = "";
[@bs.get] external mozBrightness: t => float = "";

// Still experimental
/* [@bs.send.pipe : t] external onorientationchange : (idleDeadline => unit) => idleCallbackId = ""; [> experimental, Cooperative Scheduling of Background Tasks <] */
