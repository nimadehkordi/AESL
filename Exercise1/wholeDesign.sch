<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="freq_out(2:0)" />
        <signal name="clk_24" />
        <signal name="led" />
        <signal name="button_down" />
        <signal name="button_up" />
        <port polarity="Output" name="freq_out(2:0)" />
        <port polarity="Input" name="clk_24" />
        <port polarity="Output" name="led" />
        <port polarity="Input" name="button_down" />
        <port polarity="Input" name="button_up" />
        <blockdef name="ledBlinker">
            <timestamp>2019-5-7T18:14:24</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="frequencyController">
            <timestamp>2019-5-7T18:18:56</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
        </blockdef>
        <block symbolname="ledBlinker" name="XLXI_1">
            <blockpin signalname="clk_24" name="clk_24" />
            <blockpin signalname="freq_out(2:0)" name="freq(2:0)" />
            <blockpin signalname="led" name="led" />
        </block>
        <block symbolname="frequencyController" name="XLXI_2">
            <blockpin signalname="clk_24" name="clk" />
            <blockpin signalname="button_down" name="button_down" />
            <blockpin signalname="button_up" name="button_up" />
            <blockpin signalname="freq_out(2:0)" name="freq(2:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1376" y="1200" name="XLXI_1" orien="R0">
        </instance>
        <instance x="960" y="1328" name="XLXI_2" orien="R0">
        </instance>
        <branch name="freq_out(2:0)">
            <wire x2="1360" y1="1168" y2="1168" x1="1344" />
            <wire x2="1376" y1="1168" y2="1168" x1="1360" />
            <wire x2="1360" y1="1168" y2="1312" x1="1360" />
        </branch>
        <branch name="clk_24">
            <wire x2="896" y1="1104" y2="1104" x1="848" />
            <wire x2="896" y1="1104" y2="1168" x1="896" />
            <wire x2="960" y1="1168" y2="1168" x1="896" />
            <wire x2="1376" y1="1104" y2="1104" x1="896" />
        </branch>
        <branch name="led">
            <wire x2="1792" y1="1104" y2="1104" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="1792" y="1104" name="led" orien="R0" />
        <iomarker fontsize="28" x="848" y="1104" name="clk_24" orien="R180" />
        <branch name="button_down">
            <wire x2="960" y1="1232" y2="1232" x1="928" />
        </branch>
        <iomarker fontsize="28" x="928" y="1232" name="button_down" orien="R180" />
        <branch name="button_up">
            <wire x2="960" y1="1296" y2="1296" x1="928" />
        </branch>
        <iomarker fontsize="28" x="928" y="1296" name="button_up" orien="R180" />
        <iomarker fontsize="28" x="1360" y="1312" name="freq_out(2:0)" orien="R90" />
    </sheet>
</drawing>