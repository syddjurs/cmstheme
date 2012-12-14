(function ($) {
var is_visible = false;
$('.agenda-item').hide();
$('a.agenda-bullet-list').click(function(e) {
e.preventDefault();
$(this).next('.agenda-item').toggle();
$(this).toggleClass('open')
$('a.agenda-bullet-list').not(this).next('.agenda-item').hide();
$('a.agenda-bullet-list').not(this).removeClass('open');
var top = $(this).next('.agenda-item').offset().top;
window.scrollTo(0, top -50);
});
}(jQuery)); 
