/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.6

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TestGainAudioProcessorEditor::TestGainAudioProcessorEditor (TestGainAudioProcessor& ownerProc)
    : AudioProcessorEditor(ownerProc), processor(ownerProc)
{
    //[Constructor_pre] You can add your own custom stuff here..
    gainSlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    gainSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);
    gainSlider.setRange(-60.0f, 0.005f, 0.01f);
    gainSlider.setValue(-30.0f);
    gainSlider.addListener(this);
    addAndMakeVisible(gainSlider);
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (200, 300);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);//starts timer with interval of 200mS
    //[/Constructor]
}

TestGainAudioProcessorEditor::~TestGainAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TestGainAudioProcessorEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void TestGainAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    gainSlider.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 150);
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void TestGainAudioProcessorEditor::timerCallback()
{
    //if you want any display updates with a refresh timer add them here
}

void TestGainAudioProcessorEditor::sliderValueChanged(juce::Slider *slider)
{
    if (slider == &gainSlider)
    {
        processor.gainVal = gainSlider.getValue();
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TestGainAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="TestGainAudioProcessor&amp; ownerProc" variableInitialisers="AudioProcessorEditor(ownerProc), processor(ownerProc)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

