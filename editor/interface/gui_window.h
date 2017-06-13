#pragma once
#include "runtime/rendering/render_window.h"
#include "docks/imguidock.h"


class gui_window : public render_window
{
public:
	//-----------------------------------------------------------------------------
	//  Name : gui_window ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	gui_window();
	//-----------------------------------------------------------------------------
	//  Name : gui_window ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	gui_window(mml::video_mode mode, const std::string& title, std::uint32_t style = mml::style::standard);
	//-----------------------------------------------------------------------------
	//  Name : ~gui_window (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual ~gui_window();

	//-----------------------------------------------------------------------------
	//  Name : frame_begin (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void frame_begin();
	//-----------------------------------------------------------------------------
	//  Name : frame_update (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void frame_update(std::chrono::duration<float> dt);
	//-----------------------------------------------------------------------------
	//  Name : frame_render (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void frame_render(std::chrono::duration<float> dt);

	//-----------------------------------------------------------------------------
	//  Name : on_gui (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void on_gui(std::chrono::duration<float> dt) {}

	//-----------------------------------------------------------------------------
	//  Name : render_dockspace (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void render_dockspace();



	//-----------------------------------------------------------------------------
	//  Name : frame_end (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void frame_end();
	//-----------------------------------------------------------------------------
	//  Name : filter_event (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual bool filter_event(const mml::platform_event& event);

	//-----------------------------------------------------------------------------
	//  Name : get_dockspace ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	inline imguidock::dockspace& get_dockspace() { return _dockspace; }

protected:
	///
	imguidock::dockspace _dockspace;
	///
	ImGuiContext* _gui_context;

};