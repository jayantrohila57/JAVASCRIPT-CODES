$(document).ready(function() {
    //some of the jquery pre made functions.
    $("button").addClass("animated bounce");
    $(".well").addClass("animated shake");
    $("#target3").addClass("animated fadeOut");
    $("button").removeClass("btn-default");
    $("#target1").css("color", "blue");
    $("#target4").html('<em>#target4</em>');
    $("#target2").appendTo("#right-well");
    $("#target5").clone().appendTo("#left-well");
    $("#left-well").parent().css("background-color", "red");
    $("#target1").parent().css("background-color", "red");
    $(".target:nth-child(2)").addClass("animated bounce");
    $("#right-well").children().css("color", "orange");
    $(".target:even").addClass("animated shake");
    $("body").addClass("animated hinge");
});